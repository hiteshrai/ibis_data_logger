namespace ibis_data_receiver
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.OpenCloseButton = new System.Windows.Forms.Button();
            this.serialPortList = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.OutputFileTextBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // OpenCloseButton
            // 
            this.OpenCloseButton.Location = new System.Drawing.Point(342, 42);
            this.OpenCloseButton.Name = "OpenCloseButton";
            this.OpenCloseButton.Size = new System.Drawing.Size(167, 43);
            this.OpenCloseButton.TabIndex = 0;
            this.OpenCloseButton.Text = "Open";
            this.OpenCloseButton.UseVisualStyleBackColor = true;
            this.OpenCloseButton.Click += new System.EventHandler(this.OpenCloseButton_Click);
            // 
            // serialPortList
            // 
            this.serialPortList.FormattingEnabled = true;
            this.serialPortList.Location = new System.Drawing.Point(125, 50);
            this.serialPortList.Name = "serialPortList";
            this.serialPortList.Size = new System.Drawing.Size(197, 28);
            this.serialPortList.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(23, 53);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(85, 20);
            this.label1.TabIndex = 2;
            this.label1.Text = "Serial port:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(23, 194);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(133, 20);
            this.label2.TabIndex = 3;
            this.label2.Text = "Packets received:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(162, 194);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(47, 20);
            this.label3.TabIndex = 4;
            this.label3.Text = "None";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(23, 129);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(86, 20);
            this.label4.TabIndex = 5;
            this.label4.Text = "Output file:";
            // 
            // OutputFileTextBox
            // 
            this.OutputFileTextBox.Location = new System.Drawing.Point(125, 126);
            this.OutputFileTextBox.Name = "OutputFileTextBox";
            this.OutputFileTextBox.Size = new System.Drawing.Size(309, 26);
            this.OutputFileTextBox.TabIndex = 6;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(541, 250);
            this.Controls.Add(this.OutputFileTextBox);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.serialPortList);
            this.Controls.Add(this.OpenCloseButton);
            this.Name = "MainForm";
            this.Text = "Ibis Data Receiver";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button OpenCloseButton;
        private System.Windows.Forms.ComboBox serialPortList;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox OutputFileTextBox;
    }
}

