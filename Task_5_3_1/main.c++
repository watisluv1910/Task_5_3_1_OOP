#include "fourth_class.h"
#include "answer_struct.h"

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

void main() 
{
	FourthClass* ptr = nullptr; // pointer

	vector<int> parameters = {0, 0, 0, 0}; // coefficients vector

	for (auto& element : parameters)
	{
		cin >> element;
	}

	FourthClass object(parameters[0], parameters[1], parameters[2], parameters[3]);

	ptr = &object; // pointer initializing

	answer temp_answer;

	cin >> temp_answer.body; // polynomial variable

	vector<answer> answers;

	while (temp_answer.body) 
	{
		ptr->set_body(temp_answer.body);

		cin >> temp_answer.class_number;

		temp_answer.polynomial_value
			= ptr->RunCalculation(temp_answer.class_number);

		answers.push_back(temp_answer);

		cin >> temp_answer.body; // polynomial variable
	}

	for (size_t i = 0; i < parameters.size(); i++)
	{
		cout << "a" << i + 1 << " = " 
			<< parameters[i] << ((i == parameters.size() - 1) ? "\n" : "    ");
	}

	for (size_t i = 0; i < answers.size(); i++)
	{
		cout << "Class " << answers[i].class_number << "    "
			<< "F( " << answers[i].body << " ) = "
			<< answers[i].polynomial_value 
			<< ((i == answers.size() - 1) ? "" : "\n");
	}
}