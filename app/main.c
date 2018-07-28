/*
 **/
#include <string.h>

#include "hardware.h"
#include "usb_cdc.h"
#include "packet_manager.h"
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
    
	char * transmit_payload = "HELLO HITESH HOW ARE YOU???\r\n";
	uint32_t transmit_payload_length = strlen(transmit_payload);
	
	uint32_t last_usb_send_tick = clock_get_tick();
	uint8_t command = 0x01;
	
	while (1)
	{
		usb_cdc_task();
		
		if (clock_get_elapsed_time_ms(clock_get_tick(), last_usb_send_tick) >= 1000)
		{
			packet_manager_send_packet(command, (uint8_t *)transmit_payload, transmit_payload_length);
			last_usb_send_tick = clock_get_tick();
		}
	}
}
