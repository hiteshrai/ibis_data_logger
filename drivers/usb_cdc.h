/*
 **/
#ifndef _USB_CDC_H_
#define _USB_CDC_H_

#include <stdint.h>
/*******************************************************************************
 * DEFINITION
 ******************************************************************************/
typedef void(*usb_cdc_receive)(uint8_t *data, uint32_t length);

/*******************************************************************************
 * API
 ******************************************************************************/
void usb_cdc_init(void);
void usb_cdc_task(void);
void usb_cdc_send(uint8_t *data, uint32_t length);
void usb_cdc_set_receive_callback(usb_cdc_receive rx);

#endif /* USB_CDC_H_ */
