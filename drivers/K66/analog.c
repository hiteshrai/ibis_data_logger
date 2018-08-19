/*analog.c : Drivers for analog front end
 **/

#include "fsl_dspi.h"
#include "spi.h"
#include "pwm.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "custom_board.h"
#include "analog.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
// PGA commands and registers
#define PGA_WRITE_COMMAND         0x40
#define PGA_READ_COMMAND          0x80

#define PGA_REG_GAIN              0x00
#define PGA_REG_MUX               0x06

#define PGA_REG_MUX_INIT          0x60
#define PGA_REG_GAIN_UNITY        0x18

// IRQ handling
#define ANALOG_READY_IRQ          PORTE_IRQn
#define ANALOG_READY_IRQ_HANDLER  PORTE_IRQHandler

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
analog_ready_callback_t analog_ready_callback = NULL;


/*******************************************************************************
 * Code
 ******************************************************************************/
void ANALOG_READY_IRQ_HANDLER(void)
{
	GPIO_ClearPinsInterruptFlags(ANALOG_GPIO, 1U << ANALOG_READY_PIN);
	if (analog_ready_callback)
	{
		analog_ready_callback();
	}
}


static void setup_rdy_pin(void)
{
	gpio_pin_config_t ready_pin_config = 
	{
		kGPIO_DigitalInput,
		0,
	};
	
	PORT_SetPinInterruptConfig(ANALOG_PORT, ANALOG_READY_PIN, kPORT_InterruptFallingEdge);
	EnableIRQ(ANALOG_READY_IRQ);
	GPIO_PinInit(ANALOG_GPIO, ANALOG_READY_PIN, &ready_pin_config);
}

static void setup_pga(void)
{
	spi_init(kDSPI_Pcs0);
	uint8_t mux_data[] = { PGA_WRITE_COMMAND | PGA_REG_MUX, PGA_REG_MUX_INIT };
	uint8_t gain_data[] = { PGA_WRITE_COMMAND | PGA_REG_GAIN, PGA_REG_GAIN_UNITY };
	spi_transaction(mux_data, NULL, sizeof(mux_data), kDSPI_MasterPcs0);
	spi_transaction(gain_data, NULL, sizeof(gain_data), kDSPI_MasterPcs0);
	spi_deinit();
}

static void analog_pin_init(void)
{
	/* Configure MCLK pin to use as PWM and READY pin as an GPIO */
	CLOCK_EnableClock(ANALOG_CLOCK);
	PORT_SetPinMux(ANALOG_PORT, ANALOG_MCLK_PIN, kPORT_MuxAlt6);
	PORT_SetPinMux(ANALOG_PORT, ANALOG_READY_PIN, kPORT_MuxAsGpio);
	
	/* Configure SPI bus*/
	CLOCK_EnableClock(ANALOG_SPI_CLOCK);
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_MISO, kPORT_MuxAlt2);
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_MOSI, kPORT_MuxAlt2);
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_CLK, kPORT_MuxAlt2);
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_CS_PGA, kPORT_MuxAlt2);
		
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_CS_ADC, kPORT_MuxAsGpio);
	
	gpio_pin_config_t adc_cs_config = 
	{
		kGPIO_DigitalOutput,
		1,
	};
	
	GPIO_PinInit(ANALOG_SPI_GPIO, ANALOG_SPI_CS_ADC, &adc_cs_config);
}

void analog_init(void)
{
	analog_pin_init();
	setup_pga();
}

void analog_start(uint32_t freq, analog_ready_callback_t cb)
{
	// Make sure Chip select for 2512-24 ADC chip is used for SPI and not as normal GPIO.
	PORT_SetPinMux(ANALOG_SPI_PORT, ANALOG_SPI_CS_ADC, kPORT_MuxAlt2);

	// Setup Ready pin for 2512-24 ADC Chip.
    setup_rdy_pin();
	
	// Initialize MCLK pin for 2512-24 ADC chip.
	pwm_init(freq);	
	
	spi_init(kDSPI_Pcs1);
	
	analog_ready_callback = cb;
}

void analog_stop(void)
{
	pwm_deinit();
	analog_ready_callback = NULL;
}

uint32_t analog_get_reading(void)
{
	uint32_t read_data = 0x23;
	spi_transaction(NULL, (uint8_t *)&read_data, sizeof(read_data), kDSPI_MasterPcs1);
	
	return read_data;
}
