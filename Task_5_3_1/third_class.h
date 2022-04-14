#ifndef THIRD_CLASS_H
#define THIRD_CLASS_H

#include "second_class.h"

class ThirdClass : public SecondClass
{
private:

	int coefficient_ = 0;
	const unsigned int kclass_number_ = 3;
public:

	ThirdClass(int a1, int a2, int a3);
	int Calculate() override;
	int RunCalculation(unsigned int class_number) override;
};

#endif // THIRD_CLASS_H