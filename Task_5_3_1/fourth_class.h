#ifndef FOURTH_CLASS_H
#define FOURTH_CLASS_H

#include "third_class.h"

class FourthClass : public ThirdClass
{
private:

	int coefficient_ = 0;
	const unsigned int kclass_number_ = 4;
public:

	FourthClass(int a1, int a2, int a3, int a4);
	int Calculate() override;
	int RunCalculation(unsigned int class_number) override;
};

#endif // FOURTH_CLASS_H