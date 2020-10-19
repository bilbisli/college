#include "Person.h"
#include <iostream>
using namespace std;

class Employee {

private:
	float salary;
public:
	Employee(salary = 0);
	Employee(const float);
	Employee(const Employee&);
	~Employee();
};