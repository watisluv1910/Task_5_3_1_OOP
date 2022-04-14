#include "first_class.h"

#include <cmath>

FirstClass::FirstClass(int a1)
{
    this->coefficient_ = a1;
}

int FirstClass::Calculate()
{
    return this->coefficient_ * pow(body_, kclass_number_);
}

int FirstClass::RunCalculation(unsigned int class_number)
{
    if (class_number == this->kclass_number_)
    {
        return FirstClass::Calculate();
    }
}
