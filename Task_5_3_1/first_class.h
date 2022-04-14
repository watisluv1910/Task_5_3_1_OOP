#ifndef FIRST_CLASS_H
#define FIRST_CLASS_H

class FirstClass
{
private:

	int coefficient_ = 0;
	const unsigned int kclass_number_ = 1;
protected:

	int body_ = 0;
public:

	FirstClass(int a1);
	void set_body(int body) { this->body_ = body; };
	virtual int Calculate();
	virtual int RunCalculation(unsigned int class_number);
};

#endif // FIRST_CLASS_H