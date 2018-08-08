/*
 **/
#include <string.h>

#include "hardware.h"
#include "usb_cdc.h"
#include "packet_manager.h"
#include "clock.h"
#include "fsl_gpio.h"
#include "analog.h"

#include "board.h"
/*******************************************************************************
* Definitions
******************************************************************************/


/*******************************************************************************
* Variables
******************************************************************************/
static volatile bool analog_ready_data = false;

/*******************************************************************************
* Prototypes
******************************************************************************/

/*******************************************************************************
* Code
******************************************************************************/
static void analog_ready_callback(void)
{
	// Set the flag indicating that an analog read is available
	analog_ready_data = true;
}

int main(void)
{
	uint32_t reading = 0;
	
	hardware_init();
	usb_cdc_init();
	clock_init();
	
	uint32_t last_usb_send_tick = clock_get_tick();
	uint8_t command = 0x01;
	analog_init();	
	
	analog_start(1000, analog_ready_callback);
	
	while (1)
	{
		usb_cdc_task();
		if (analog_ready_data)
		{
			reading = analog_get_reading();
			analog_ready_data = false;
			packet_manager_send_packet(command,
				(uint8_t *)&reading,
				sizeof(reading));
		}
	}
}
