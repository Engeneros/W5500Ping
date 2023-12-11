#include <PinOut.h>

//void SetPortToInput( GPIO_TypeDef* port, unsigned char pin )
//{
//	if (pin < 8)
//	{
//		port->CRL &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRL |= (unsigned int) 4 << (pin *4);
//	}
//	else 
//	{
//		pin &= 7;
//		port->CRH &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRH |= (unsigned int) 4 << (pin * 4); 
//	}
//}

//void SetPortToOutput( GPIO_TypeDef* port, unsigned char pin )
//{
//	if (pin < 8)
//	{
//		port->CRL &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRL |= (unsigned int) 3 << (pin *4);
//	}
//	else 
//	{
//		pin &= 7;
//		port->CRH &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRH |= (unsigned int) 3 << (pin * 4); 
//	}
//}

//void SetPortToAlternateOut( GPIO_TypeDef* port, unsigned char pin )
//{
//	if (pin < 8)
//	{
//		port->CRL &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRL |= (unsigned int) 0xB << (pin *4);
//	}
//	else 
//	{
//		pin &= 7;
//		port->CRH &= (unsigned int) ~(0xF << (pin * 4));
//		port->CRH |= (unsigned int) 0xB << (pin * 4); 
//	}
//}





PinOut::PinOut( GPIO_TypeDef* portN, unsigned char pinN) : port(portN), pin(pinN)
{
//Enable pheripherial clock	
	if( port == GPIOA)
		RCC->APB2ENR |= 1 << 2;
	else if( port == GPIOB)
		RCC->APB2ENR |= 1 << 3;
	else if( port == GPIOC)
		RCC->APB2ENR |= 1 << 4;
	//For packages that have D & E ports:	
//	else if( port == GPIOD)
//		RCC->APB2ENR |= 1 << 5;
//	else if( port == GPIOE)
//		RCC->APB2ENR |= 1 << 6;
	if (pin < 8)
	{
		port->CRL &= (uint32_t) ~(0xF << (pin * 4));
		port->CRL |= (uint32_t) 3 << (pin *4);
	}
	else 
	{
		pin &= 7;
		port->CRH &= (uint32_t) ~(0xF << (pin * 4));
		port->CRH |= (uint32_t) 3 << (pin * 4); 
	}	
	pinMask = 1 << pin;
}

void PinOut::SetVal( bool val)
{
	(val == false)? ToLow() : ToHigh();
}

void PinOut::Toggle()
{
	port->ODR ^= pinMask;
}

void PinOut::ToHigh()
{
	port->BRR = pinMask;
}

void PinOut::ToLow()
{
	port->BSRR = pinMask;
}

bool PinOut::GetVal() const
{
	return (port->ODR & pinMask)? false : true;
}
