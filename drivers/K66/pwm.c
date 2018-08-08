#include "board.h"
#include "fsl_ftm.h"

#include "clock_config.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* The Flextimer instance/channel used for board */
#define PWM_BASEADDR                   FTM3
#define PWM_CHANNEL                    2U

/* Get source clock for FTM driver */
#define PWM_SOURCE_CLOCK               CLOCK_GetFreq(kCLOCK_BusClk)

/*******************************************************************************
 * Prototypes
 ******************************************************************************/


/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
void pwm_init(uint32_t freq)
{
	ftm_config_t ftmInfo;
	uint8_t updatedDutycycle = 1U;
	ftm_chnl_pwm_signal_param_t ftmParam;

	/* Configure ftm params with frequency 24kHZ */
	ftmParam.chnlNumber = (ftm_chnl_t)PWM_CHANNEL;
	ftmParam.level = kFTM_HighTrue;
	ftmParam.dutyCyclePercent = 0U;
	ftmParam.firstEdgeDelayPercent = 0U;
	/*
	 * ftmInfo.prescale = kFTM_Prescale_Divide_1;
	 * ftmInfo.bdmMode = kFTM_BdmMode_0;
	 * ftmInfo.pwmSyncMode = kFTM_SoftwareTrigger;
	 * ftmInfo.reloadPoints = 0;
	 * ftmInfo.faultMode = kFTM_Fault_Disable;
	 * ftmInfo.faultFilterValue = 0;
	 * ftmInfo.deadTimePrescale = kFTM_Deadtime_Prescale_1;
	 * ftmInfo.deadTimeValue = 0;
	 * ftmInfo.extTriggers = 0;
	 * ftmInfo.chnlInitState = 0;
	 * ftmInfo.chnlPolarity = 0;
	 * ftmInfo.useGlobalTimeBase = false;
	 */
	FTM_GetDefaultConfig(&ftmInfo);
	/* Initialize FTM module */
	FTM_Init(BOARD_FTM_BASEADDR, &ftmInfo);

	FTM_SetupPwm(BOARD_FTM_BASEADDR, &ftmParam, 1U, kFTM_EdgeAlignedPwm, freq, PWM_SOURCE_CLOCK);
	FTM_StartTimer(BOARD_FTM_BASEADDR, kFTM_SystemClock);
	
	/* Start PWM mode with updated duty cycle */
	FTM_UpdatePwmDutycycle(BOARD_FTM_BASEADDR,
		(ftm_chnl_t)PWM_CHANNEL,
		kFTM_EdgeAlignedPwm,
		updatedDutycycle);
	/* Software trigger to update registers */
	FTM_SetSoftwareTrigger(BOARD_FTM_BASEADDR, true);
}

void pwm_deinit(void)
{
	FTM_Deinit(PWM_BASEADDR);
}
