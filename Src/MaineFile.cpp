//D:\D\Prj\SoloPeD\W5500\W5500Ping\Src\MaineFile.cpp
#include <PinOut.h>
#include <stm32f10x.h>
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


int main ()
{
	RCC->APB2ENR |= (1 << 14) | (0xF << 2);
	return 0;
}


