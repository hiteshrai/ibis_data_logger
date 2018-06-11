/*
 **/

#include "hardware.h"
#include "usb_cdc.h"
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
#if defined(__CC_ARM) || defined(__GNUC__)
int main(void)
#else
void main(void)
#endif
{
	hardware_init();
	usb_cdc_init();

	while (1)
	{
		usb_cdc_task();

#if USB_DEVICE_CONFIG_USE_TASK
#if defined(USB_DEVICE_CONFIG_EHCI) && (USB_DEVICE_CONFIG_EHCI > 0U)
		USB_DeviceEhciTaskFunction(s_cdcVcom.deviceHandle);
#endif
#if defined(USB_DEVICE_CONFIG_KHCI) && (USB_DEVICE_CONFIG_KHCI > 0U)
		USB_DeviceKhciTaskFunction(s_cdcVcom.deviceHandle);
#endif
#endif
	}
}
