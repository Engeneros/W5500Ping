#ifndef ABSTRAC_TPINOUT_H
#define ABSTRACT_PINOUT_H

class AbstractPinOut
{

protected:
	virtual void Toggle() = 0;
	virtual void SetVal(bool val) = 0;

	virtual bool GetVal() const = 0;
	virtual void ToHigh() = 0;
	virtual void ToLow() = 0;
public:

	operator  bool() const {return GetVal();}//(const AbstractPinOut& pin) {return pin.GetVal();}
	void operator ~(void) { Toggle(); }
	AbstractPinOut& operator >> (bool val) { SetVal (val); return *this;}
	
	virtual  ~AbstractPinOut() {}
};

#endif

