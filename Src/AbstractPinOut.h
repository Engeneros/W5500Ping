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
	void  Toggle2 () { Toggle(); Toggle();}
	void operator ~(void) { Toggle(); }
	AbstractPinOut& operator << (bool val) { SetVal (val); return *this;}
//	bool operator >> (const AbstractPinOut& pin) {return pin.GetVal();}	
	virtual  ~AbstractPinOut() {}
};

#endif

