#ifndef PINOUT_H
#define PINOUT_H

#include <AbstractPinOut.h>
#include <stm32f10x.h>  

//void SetPortToInput( GPIO_TypeDef* port, unsigned char pin );

//void SetPortToOutput( GPIO_TypeDef* port, unsigned char pin );

//void SetPortToAlternateOut( GPIO_TypeDef* port, unsigned char pin );

//void EXTI0_IRQHandler(void);



class PinOut : public AbstractPinOut 
{
public:
	PinOut( GPIO_TypeDef* portN, unsigned char pin );
	virtual void ToHigh();
	virtual void ToLow();
	virtual  ~PinOut() {}
		
protected:
	virtual void Toggle();
	virtual void SetVal(bool val);
	virtual bool GetVal() const = 0;
private:
	GPIO_TypeDef* port;
	uint8_t pin;
	uint32_t pinMask;
	
};

#endif

