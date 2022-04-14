#include "second_class.h"

#include <cmath>

SecondClass::SecondClass(int a1, int a2) : FirstClass(a1)
{
	this->coefficient_ = a2;
}
 
int SecondClass::Calculate()
{
	return this->coefficient_ * pow(body_, kclass_number_) 
		+ FirstClass::Calculate();
}

int SecondClass::RunCalculation(unsigned int class_number)
{
	if (class_number == this->kclass_number_)
	{
		return SecondClass::Calculate();
	}
	else 
	{
		return FirstClass::RunCalculation(class_number);
	}
}
