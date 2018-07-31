using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace ibis_data_receiver
{
    public partial class MainForm : Form
    {
        const byte START_BYTE = 0xA5;
        const byte PROTOCOL_VERSION_0 = 0x00;
        const byte MAX_PACKET_PAYLOAD_LEN = 255;

        enum ReceivedCommStates
        {
            Idle,
            ReceiveLength,
            ReceiveCommand,
            ReceiveData,
            ReceiveChecksum
        };

        private struct ReceivedPacket
        {
            public byte protocol;
            public byte length;
            public byte command;
            public byte[] payload;
        };

        private struct LowSpeedSampleDataHeader
        {
            UInt32 timestampMs;
            UInt16 timeBetweenSamplesMs;
            byte channelBitmask;
            byte numSamples;
        }

        private SerialPort serialPort;
        private ReceivedCommStates receivedCommState = ReceivedCommStates.Idle;
        private byte lastReceivedByte = 0;
        private int receivedLength;
        private byte receivedChecksum;
        private ReceivedPacket receivedPacket;

        public MainForm()
        {
            InitializeComponent();
            InitializeSerialPorts();
            receivedPacket.payload = new byte[MAX_PACKET_PAYLOAD_LEN];
        }

        private void LogToFile(string filename, string output)
        {
            try
            {
                using (System.IO.StreamWriter file = new System.IO.StreamWriter(filename, true))
                {
                    file.WriteLine(output);
                }
            }
            catch
            {
                // Do nothing
            }
        }

        private void HandlePacket(ReceivedPacket packet)
        {
            if (this.InvokeRequired)
            {
                this.Invoke(new MethodInvoker(() => HandlePacket(packet)));
                return;
            }

            string outputFilename = OutputFileTextBox.Text;

            switch (packet.command)
            {
                case 0x00:
                    LogToFile(outputFilename, "Packet type 0: " + packet.payload[0].ToString() + " " + packet.payload[1].ToString());
                    break;

                case 0x10:
                    // Parse read data packet
                    break;
            }
        }

        private void SerialDataReceivedHandler(object sender, SerialDataReceivedEventArgs e)
        {
            const int MAX_RECEIVE_SIZE = MAX_PACKET_PAYLOAD_LEN + 20;
            SerialPort sp = (SerialPort)sender;
            byte[] readbytes = new byte[MAX_RECEIVE_SIZE];
            int receivedBytes = sp.Read(readbytes, 0, MAX_RECEIVE_SIZE);
            int i;
            for (i = 0; i < receivedBytes; i++)
            {
                ProcessReceivedByte(readbytes[i]);
            }
        }

        private void ProcessReceivedByte(byte c)
        {
            switch (receivedCommState)
            {
                case ReceivedCommStates.Idle:
                    if (lastReceivedByte == START_BYTE)
                    {
                        receivedPacket.protocol = c;
                        receivedChecksum = c;
                        if (receivedPacket.protocol == PROTOCOL_VERSION_0)
                        {
                            receivedCommState = ReceivedCommStates.ReceiveLength;
                        }
                        else
                        {
                            receivedCommState = ReceivedCommStates.Idle;
                        }
                    }
                    break;

                case ReceivedCommStates.ReceiveLength:
                    receivedPacket.length = c;
                    receivedChecksum += c;
                    receivedCommState = ReceivedCommStates.ReceiveCommand;
                    break;

                case ReceivedCommStates.ReceiveCommand:
                    receivedPacket.command = c;
                    receivedChecksum += c;
                    receivedLength = 0;
                    receivedCommState = ReceivedCommStates.ReceiveData;
                    break;

                case ReceivedCommStates.ReceiveData:
                    if (receivedLength < receivedPacket.length)
                    {
                        receivedPacket.payload[receivedLength] = c;
                        receivedChecksum += c;
                        receivedLength++;
                    }
                    if (receivedLength >= receivedPacket.length)
                    {
                        receivedCommState = ReceivedCommStates.ReceiveChecksum;
                    }
                    break;

                case ReceivedCommStates.ReceiveChecksum:
                    if (c == receivedChecksum)
                    {
                        // Completed packet
                        HandlePacket(receivedPacket);
                    }
                    receivedCommState = ReceivedCommStates.Idle;
                    break;

            }
            lastReceivedByte = c;
        }

        public void InitializeSerialPorts()
        {
            string[] serialPorts = SerialPort.GetPortNames();
            foreach (string serialPort in serialPorts)
            {
                serialPortList.Items.Add(serialPort);
            }
            if (serialPortList.Items.Count > 0)
            {
                serialPortList.SelectedItem = serialPortList.Items[0];
            }
        }

        private void OpenCloseButton_Click(object sender, EventArgs e)
        {
            if (serialPort != null && serialPort.IsOpen )
            {
                // Close the currently open serial port
                serialPort.Close();
            }
            OpenCloseButton.Text = "Open";
            string selectedSerialPort = serialPortList.SelectedItem.ToString();
            if (selectedSerialPort.Length > 0)
            {
                // Try to open the serial port
                serialPort = new SerialPort(selectedSerialPort);
                serialPort.BaudRate = 115200;
                serialPort.DataBits = 8;
                serialPort.Parity = Parity.None;
                serialPort.StopBits = StopBits.One;
                serialPort.Handshake = Handshake.None;

                serialPort.DataReceived += new SerialDataReceivedEventHandler(SerialDataReceivedHandler);
                serialPort.Open();
                if (serialPort.IsOpen)
                {
                    OpenCloseButton.Text = "Close";
                }
            }
        }
    }
}
