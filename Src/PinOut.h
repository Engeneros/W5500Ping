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
//	AbstractPinOut& operator = (bool val);// { SetVal (val); return *this;}
//	bool operator = (const AbstractPinOut& pin);// {return pin.GetVal();}
	virtual  ~PinOut() {}
	virtual bool GetVal() const;
		
protected:
	virtual void ToHigh();
	virtual void ToLow();
	virtual void Toggle();
	virtual void SetVal(bool val);

private:
	GPIO_TypeDef* port;
	uint8_t pin;
	uint32_t pinMask;
	
};

#endif

