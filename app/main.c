/*
 **/
#include <string.h>

#include "hardware.h"
#include "usb_cdc.h"
#include "clock.h"

/*******************************************************************************
* Definitions
******************************************************************************/

/*******************************************************************************
* Variables
******************************************************************************/

/*******************************************************************************
* Prototypes
******************************************************************************/

/*******************************************************************************
* Code
******************************************************************************/

int main(void)
{
	hardware_init();
	usb_cdc_init();
	clock_init();
    
	char * transmit_string = "HELLO HITESH HOW ARE YOU???\r\n";
	uint32_t transmit_string_length = strlen(transmit_string);
	
	uint32_t last_usb_send_tick = clock_get_tick();
	
	while (1)
	{
		usb_cdc_task();
		
		if (clock_get_elapsed_time_ms(clock_get_tick(), last_usb_send_tick) >= 1000)
		{
			usb_cdc_write((uint8_t *)transmit_string, transmit_string_length);
			last_usb_send_tick = clock_get_tick();
		}
	}
}
