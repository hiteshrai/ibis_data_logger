#ifndef _ANALOG_H_
#define _ANALOG_H_

#include <stdint.h>
/*******************************************************************************
 * Definitions
 ******************************************************************************/
typedef void(*analog_ready_callback_t)(void);

/*******************************************************************************
* API
******************************************************************************/
void analog_init(void);
void analog_start(uint32_t freq, analog_ready_callback_t cb);
void analog_stop(void);
uint32_t analog_get_reading(void);

#endif /* _ANALOG_H_ */
