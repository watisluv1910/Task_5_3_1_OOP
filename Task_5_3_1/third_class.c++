#include "third_class.h"

#include <cmath>

ThirdClass::ThirdClass(int a1, int a2, int a3) : SecondClass (a1, a2)
{
	this->coefficient_ = a3;
}

int ThirdClass::Calculate()
{
	return this->coefficient_ * pow(body_, kclass_number_) 
		+ SecondClass::Calculate();
}

int ThirdClass::RunCalculation(unsigned int class_number)
{
	if (class_number == this->kclass_number_)
	{
		return ThirdClass::Calculate();
	}
	else
	{
		return SecondClass::RunCalculation(class_number);
	}
}
