//D:\D\Prj\SoloPeD\W5500\W5500Ping\Src\MaineFile.cpp
#include <PinOut.h>
//#include <stm32f10x.h>
//void ADS1216_Initialisation() {
//    RCC->APB2ENR |= (1 << 14) | (0xF << 2);
//	SetPortToOutput(GPIOA, 3); // CS ADS
//	SetPortToInput(GPIOA, 2); // Data Ready ADS
//	SetPortToOutput(GPIOB, 1); // Reset
//	SetPortToOutput(GPIOB, 15);
//    SetPortToOutput(GPIOB, 0); // Buffer
//    
//    
//    GPIOB->BSRR |= 1 << 8;
//    
//    GPIOB->BRR |= 1;
//	GPIOB->BSRR |= 2;
//	GPIOB->BSRR |= 1 << 15;
//	GPIOA->BRR |= 1 << 3; // cs up (inverted)
//void DelayMs(double msec)
//{	
//	PinOut pB9  = PinOut(GPIOB, 9);
//	for(int nRep = 100000; nRep > 0; --nRep)
//	{
//		pB9.ToHigh();
//		pB9.ToLow();
//		--nRep;
//		--nRep;		
//	}
//}
void InitGeneral()
{
	AFIO->MAPR &= (unsigned int) ~(0x00000007 << 24);//
	AFIO->MAPR |= (unsigned int) (0x00000002 << 24);
}

void DelayMs(unsigned int mSec)
{
	unsigned int nTics;
	for( nTics = mSec * 1000; nTics > 0; nTics--)
	{
	}	
}


int main ()
{
	InitGeneral();
	DelayMs(200);
	AbstractPinOut* pc_13;
	pc_13 = new PinOut(GPIOC, 13);
	PinOut pC13 = PinOut(GPIOC, 13);
	while(true)
	{
		pC13.ToLow();
//		GPIOC->BRR = 1 << 13;
		DelayMs(400.0);
		pC13.ToHigh();
//		GPIOC->BSRR = 1 << 13;
		DelayMs(2000.0);
		
		*pc_13 = 0;

		DelayMs(4000.0);
		//pC13.ToHigh();
		*pc_13 = 1;
//		GPIOC->BSRR = 1 << 13;
		DelayMs(10000.0);
	}
	return 0;
}


