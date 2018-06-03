/*
	This file contains the definitions of the interrupt handlers for K66F18 MCU family.
	The file is provided by Sysprogs under the BSD license.
*/


extern void *_estack;
#define NULL ((void *)0)
#define TRIM_VALUE ((void *)0xFFFFFFFF)

void Reset_Handler();
void Default_Handler();

void NMI_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void HardFault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void MemManage_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void BusFault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void UsageFault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void SVC_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void DebugMon_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void PendSV_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void SysTick_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA0_DMA16_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA1_DMA17_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA2_DMA18_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA3_DMA19_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA4_DMA20_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA5_DMA21_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA6_DMA22_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA7_DMA23_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA8_DMA24_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA9_DMA25_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA10_DMA26_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA11_DMA27_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA12_DMA28_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA13_DMA29_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA14_DMA30_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA15_DMA31_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DMA_Error_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void MCM_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void FTFE_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void Read_Collision_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void LVD_LVW_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void LLWU_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void WDOG_EWM_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void RNG_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2C0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2C1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void SPI0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void SPI1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2S0_Tx_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2S0_Rx_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void Reserved46_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART0_RX_TX_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART0_ERR_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART1_RX_TX_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART1_ERR_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART2_RX_TX_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART2_ERR_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART3_RX_TX_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART3_ERR_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ADC0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CMP0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CMP1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void FTM0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void FTM1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void FTM2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CMT_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void RTC_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void RTC_Seconds_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PIT0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PIT1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PIT2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PIT3_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PDB0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void USB0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void USBDCD_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void Reserved71_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DAC0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void MCG_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void LPTMR0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PORTA_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PORTB_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PORTC_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PORTD_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void PORTE_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void SWI_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void SPI2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART4_RX_TX_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void UART4_ERR_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void Reserved84_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void Reserved85_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CMP2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void FTM3_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DAC1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ADC1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2C2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_ORed_Message_buffer_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_Bus_Off_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_Error_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_Tx_Warning_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_Rx_Warning_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN0_Wake_Up_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void SDHC_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ENET_1588_Timer_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ENET_Transmit_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ENET_Receive_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void ENET_Error_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void LPUART0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void TSI0_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void TPM1_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void TPM2_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void USBHSDCD_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void I2C3_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CMP3_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void USBHS_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_ORed_Message_buffer_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_Bus_Off_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_Error_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_Tx_Warning_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_Rx_Warning_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void CAN1_Wake_Up_IRQHandler() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR0() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR1() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR2() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR3() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR4() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR5() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR6() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR7() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR8() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR9() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR10() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR11() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR12() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR13() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR14() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR15() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR16() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR17() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR18() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR19() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR20() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR21() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR22() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR23() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR24() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR25() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR26() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR27() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR28() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR29() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR30() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR31() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR32() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR33() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR34() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR35() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR36() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR37() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR38() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR39() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR40() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR41() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR42() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR43() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR44() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR45() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR46() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR47() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR48() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR49() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR50() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR51() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR52() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR53() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR54() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR55() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR56() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR57() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR58() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR59() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR60() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR61() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR62() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR63() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR64() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR65() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR66() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR67() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR68() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR69() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR70() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR71() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR72() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR73() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR74() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR75() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR76() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR77() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR78() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR79() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR80() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR81() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR82() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR83() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR84() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR85() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR86() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR87() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR88() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR89() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR90() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR91() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR92() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR93() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR94() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR95() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR96() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR97() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR98() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR99() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR100() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR101() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR102() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR103() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR104() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR105() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR106() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR107() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR108() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR109() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR110() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR111() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR112() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR113() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR114() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR115() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR116() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR117() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR118() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR119() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR120() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR121() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR122() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR123() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR124() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR125() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR126() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR127() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR128() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR129() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR130() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR131() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR132() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR133() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR134() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR135() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR136() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR137() __attribute__ ((weak, alias ("Default_Handler")));
void DefaultISR138() __attribute__ ((weak, alias ("Default_Handler")));

void * __vect_table[0x100] __attribute__ ((section (".vectortable"))) = 
{
	&_estack,
	&Reset_Handler,
	&NMI_Handler,
	&HardFault_Handler,
	&MemManage_Handler,
	&BusFault_Handler,
	&UsageFault_Handler,
	NULL,
	NULL,
	NULL,
	NULL,
	&SVC_Handler,
	&DebugMon_Handler,
	NULL,
	&PendSV_Handler,
	&SysTick_Handler,
	&DMA0_DMA16_IRQHandler,
	&DMA1_DMA17_IRQHandler,
	&DMA2_DMA18_IRQHandler,
	&DMA3_DMA19_IRQHandler,
	&DMA4_DMA20_IRQHandler,
	&DMA5_DMA21_IRQHandler,
	&DMA6_DMA22_IRQHandler,
	&DMA7_DMA23_IRQHandler,
	&DMA8_DMA24_IRQHandler,
	&DMA9_DMA25_IRQHandler,
	&DMA10_DMA26_IRQHandler,
	&DMA11_DMA27_IRQHandler,
	&DMA12_DMA28_IRQHandler,
	&DMA13_DMA29_IRQHandler,
	&DMA14_DMA30_IRQHandler,
	&DMA15_DMA31_IRQHandler,
	&DMA_Error_IRQHandler,
	&MCM_IRQHandler,
	&FTFE_IRQHandler,
	&Read_Collision_IRQHandler,
	&LVD_LVW_IRQHandler,
	&LLWU_IRQHandler,
	&WDOG_EWM_IRQHandler,
	&RNG_IRQHandler,
	&I2C0_IRQHandler,
	&I2C1_IRQHandler,
	&SPI0_IRQHandler,
	&SPI1_IRQHandler,
	&I2S0_Tx_IRQHandler,
	&I2S0_Rx_IRQHandler,
	&Reserved46_IRQHandler,
	&UART0_RX_TX_IRQHandler,
	&UART0_ERR_IRQHandler,
	&UART1_RX_TX_IRQHandler,
	&UART1_ERR_IRQHandler,
	&UART2_RX_TX_IRQHandler,
	&UART2_ERR_IRQHandler,
	&UART3_RX_TX_IRQHandler,
	&UART3_ERR_IRQHandler,
	&ADC0_IRQHandler,
	&CMP0_IRQHandler,
	&CMP1_IRQHandler,
	&FTM0_IRQHandler,
	&FTM1_IRQHandler,
	&FTM2_IRQHandler,
	&CMT_IRQHandler,
	&RTC_IRQHandler,
	&RTC_Seconds_IRQHandler,
	&PIT0_IRQHandler,
	&PIT1_IRQHandler,
	&PIT2_IRQHandler,
	&PIT3_IRQHandler,
	&PDB0_IRQHandler,
	&USB0_IRQHandler,
	&USBDCD_IRQHandler,
	&Reserved71_IRQHandler,
	&DAC0_IRQHandler,
	&MCG_IRQHandler,
	&LPTMR0_IRQHandler,
	&PORTA_IRQHandler,
	&PORTB_IRQHandler,
	&PORTC_IRQHandler,
	&PORTD_IRQHandler,
	&PORTE_IRQHandler,
	&SWI_IRQHandler,
	&SPI2_IRQHandler,
	&UART4_RX_TX_IRQHandler,
	&UART4_ERR_IRQHandler,
	&Reserved84_IRQHandler,
	&Reserved85_IRQHandler,
	&CMP2_IRQHandler,
	&FTM3_IRQHandler,
	&DAC1_IRQHandler,
	&ADC1_IRQHandler,
	&I2C2_IRQHandler,
	&CAN0_ORed_Message_buffer_IRQHandler,
	&CAN0_Bus_Off_IRQHandler,
	&CAN0_Error_IRQHandler,
	&CAN0_Tx_Warning_IRQHandler,
	&CAN0_Rx_Warning_IRQHandler,
	&CAN0_Wake_Up_IRQHandler,
	&SDHC_IRQHandler,
	&ENET_1588_Timer_IRQHandler,
	&ENET_Transmit_IRQHandler,
	&ENET_Receive_IRQHandler,
	&ENET_Error_IRQHandler,
	&LPUART0_IRQHandler,
	&TSI0_IRQHandler,
	&TPM1_IRQHandler,
	&TPM2_IRQHandler,
	&USBHSDCD_IRQHandler,
	&I2C3_IRQHandler,
	&CMP3_IRQHandler,
	&USBHS_IRQHandler,
	&CAN1_ORed_Message_buffer_IRQHandler,
	&CAN1_Bus_Off_IRQHandler,
	&CAN1_Error_IRQHandler,
	&CAN1_Tx_Warning_IRQHandler,
	&CAN1_Rx_Warning_IRQHandler,
	&CAN1_Wake_Up_IRQHandler,
	&DefaultISR0,
	&DefaultISR1,
	&DefaultISR2,
	&DefaultISR3,
	&DefaultISR4,
	&DefaultISR5,
	&DefaultISR6,
	&DefaultISR7,
	&DefaultISR8,
	&DefaultISR9,
	&DefaultISR10,
	&DefaultISR11,
	&DefaultISR12,
	&DefaultISR13,
	&DefaultISR14,
	&DefaultISR15,
	&DefaultISR16,
	&DefaultISR17,
	&DefaultISR18,
	&DefaultISR19,
	&DefaultISR20,
	&DefaultISR21,
	&DefaultISR22,
	&DefaultISR23,
	&DefaultISR24,
	&DefaultISR25,
	&DefaultISR26,
	&DefaultISR27,
	&DefaultISR28,
	&DefaultISR29,
	&DefaultISR30,
	&DefaultISR31,
	&DefaultISR32,
	&DefaultISR33,
	&DefaultISR34,
	&DefaultISR35,
	&DefaultISR36,
	&DefaultISR37,
	&DefaultISR38,
	&DefaultISR39,
	&DefaultISR40,
	&DefaultISR41,
	&DefaultISR42,
	&DefaultISR43,
	&DefaultISR44,
	&DefaultISR45,
	&DefaultISR46,
	&DefaultISR47,
	&DefaultISR48,
	&DefaultISR49,
	&DefaultISR50,
	&DefaultISR51,
	&DefaultISR52,
	&DefaultISR53,
	&DefaultISR54,
	&DefaultISR55,
	&DefaultISR56,
	&DefaultISR57,
	&DefaultISR58,
	&DefaultISR59,
	&DefaultISR60,
	&DefaultISR61,
	&DefaultISR62,
	&DefaultISR63,
	&DefaultISR64,
	&DefaultISR65,
	&DefaultISR66,
	&DefaultISR67,
	&DefaultISR68,
	&DefaultISR69,
	&DefaultISR70,
	&DefaultISR71,
	&DefaultISR72,
	&DefaultISR73,
	&DefaultISR74,
	&DefaultISR75,
	&DefaultISR76,
	&DefaultISR77,
	&DefaultISR78,
	&DefaultISR79,
	&DefaultISR80,
	&DefaultISR81,
	&DefaultISR82,
	&DefaultISR83,
	&DefaultISR84,
	&DefaultISR85,
	&DefaultISR86,
	&DefaultISR87,
	&DefaultISR88,
	&DefaultISR89,
	&DefaultISR90,
	&DefaultISR91,
	&DefaultISR92,
	&DefaultISR93,
	&DefaultISR94,
	&DefaultISR95,
	&DefaultISR96,
	&DefaultISR97,
	&DefaultISR98,
	&DefaultISR99,
	&DefaultISR100,
	&DefaultISR101,
	&DefaultISR102,
	&DefaultISR103,
	&DefaultISR104,
	&DefaultISR105,
	&DefaultISR106,
	&DefaultISR107,
	&DefaultISR108,
	&DefaultISR109,
	&DefaultISR110,
	&DefaultISR111,
	&DefaultISR112,
	&DefaultISR113,
	&DefaultISR114,
	&DefaultISR115,
	&DefaultISR116,
	&DefaultISR117,
	&DefaultISR118,
	&DefaultISR119,
	&DefaultISR120,
	&DefaultISR121,
	&DefaultISR122,
	&DefaultISR123,
	&DefaultISR124,
	&DefaultISR125,
	&DefaultISR126,
	&DefaultISR127,
	&DefaultISR128,
	&DefaultISR129,
	&DefaultISR130,
	&DefaultISR131,
	&DefaultISR132,
	&DefaultISR133,
	&DefaultISR134,
	&DefaultISR135,
	&DefaultISR136,
	&DefaultISR137,
	&DefaultISR138,
	TRIM_VALUE
};

void Default_Handler()
{
	asm("BKPT 255");
}
