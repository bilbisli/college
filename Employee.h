#include "Person.h"
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Employee: virtual public Person
{
protected:
	float salary;
public:
	Employee() :name("def name"), id(000000000), age(18), salary(0) {};
	Employee(string name, long id, int age, float salary) : name(name), id(id), age(age), salary(salary) {};
	Employee(const Employee& other) :Person(other),salary(other.salary) {};
	~Employee() = 0 {};
	virtual void Print()const;
};
