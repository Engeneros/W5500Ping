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





PinOut::PinOut()
{
}

void PinOut::SetVal( bool val)
{
}

void PinOut::Toggle()
{
}

void PinOut::ToHigh()
{
}

void PinOut::ToLow()
{
}
