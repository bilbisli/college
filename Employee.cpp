#include "Employee.h"

void Employee::Print() const
{
	Person::Print();
	cout << "salary: " << salary << endl;
}