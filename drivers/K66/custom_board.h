/* custom_board.h
*/

#ifndef _CUSTOM_BOARD_H_
#define _CUSTOM_BOARD_H_

#include "fsl_device_registers.h"
#include "fsl_port.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define UART_CLOCK              kCLOCK_PortB
#define UART_PORT               PORTB
#define UART_RX_PIN             16
#define UART_TX_PIN             17

#define ANALOG_SPI_CLOCK        kCLOCK_PortD
#define ANALOG_SPI_PORT         PORTD
#define ANALOG_SPI_GPIO         GPIOD
#define ANALOG_SPI_MISO         3
#define ANALOG_SPI_MOSI         2
#define ANALOG_SPI_CLK          1
#define ANALOG_SPI_CS_PGA       0
#define ANALOG_SPI_CS_ADC       4

#define ANALOG_CLOCK            kCLOCK_PortE
#define ANALOG_PORT             PORTE
#define ANALOG_GPIO             GPIOE
#define ANALOG_MCLK_PIN         7
#define ANALOG_READY_PIN        8
#endif 
