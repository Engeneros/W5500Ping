#ifndef PINOUT_H
#define PINOUT_H

#include <AbstractPinOut.h>

class PinOut : public AbstractPinOut 
{
public:
	PinOut();
	virtual void ToHigh();
	virtual void ToLow();
	virtual  ~PinOut() {}
		
protected:
	virtual void Toggle();
	virtual void SetVal(bool val);
	virtual bool GetVal() const = 0;
};

#endif

