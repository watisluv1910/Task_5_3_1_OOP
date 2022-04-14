#ifndef SECOND_CLASS_H
#define SECOND_CLASS_H

#include "first_class.h"

class SecondClass : public FirstClass
{
private:

	int coefficient_ = 0;
	const unsigned int kclass_number_ = 2;
public:

	SecondClass(int a1, int a2);
	int Calculate() override;
	int RunCalculation(unsigned int class_number) override;
};

#endif // SECOND_CLASS_H