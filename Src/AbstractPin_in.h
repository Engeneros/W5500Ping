#ifndef ABSTRACT_PIN_IN_H
#define ABSTRACT_PIN_IN_H

typedef void (*INT_SRV_ROUTINE) ();

class AbstractPin_in
{
protected:
	virtual bool GetVal() const = 0;
public:
	bool operator = (AbstractPin_in& pin) {return pin. GetVal();} 
};


#endif