#ifndef ABSTRACT_PINOUT_H
#define ABSTRACT_PINOUT_H

#include <AbstractPin.h>

class AbstractPinOut : public AbstractPin
{

protected:
	virtual void Toggle() = 0;
	virtual void SetVal(bool val) = 0;
	virtual void ToHigh() = 0;
	virtual void ToLow() = 0;
public:
	void operator ~(void) { Toggle(); }
	AbstractPinOut& operator >> (bool val) { SetVal (val); return *this;}	
	virtual  ~AbstractPinOut() {}
};

#endif

