#include "MK66F18.h"

void Delay()
{
	int i;
	for (i = 0; i < 2000000; i++)
		asm("nop");
}

int main()
{
	SIM_BASE_PTR->SCGC5 |= SIM_SCGC5_PORTE_MASK;
	PORTE_BASE_PTR->PCR[6] = PORT_PCR_MUX(1);

	GPIOE_PDDR = 1 << 6;

	for(;;)
	{
		GPIOE_PSOR = 1 << 6;
		Delay();
		GPIOE_PCOR = 1 << 6;
		Delay();
	}

	return 0;
}