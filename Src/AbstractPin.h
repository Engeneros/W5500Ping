#ifndef ABSTRACT_PIN_H
#define ABSTRACT_PIN_H

class AbstractPin
{
protected: 
	virtual bool GetVal() const = 0;
public:
	operator  bool() const {return GetVal();}
	virtual ~AbstractPin() {}
};

#endif