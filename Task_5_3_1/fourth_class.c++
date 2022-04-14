#include "fourth_class.h"

#include <cmath>

FourthClass::FourthClass(int a1, int a2, int a3, int a4)
	: ThirdClass(a1, a2, a3)
{
	this->coefficient_ = a4;
}

int FourthClass::Calculate()
{
	return this->coefficient_ * pow(body_, kclass_number_) + ThirdClass::Calculate();
}

int FourthClass::RunCalculation(unsigned int class_number)
{
	if (class_number == this->kclass_number_)
	{
		return FourthClass::Calculate();
	}
	else
	{
		return ThirdClass::RunCalculation(class_number);
	}
}
