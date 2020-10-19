#include "Person.h"

Person::Person(const Person& other)
{
	*this = other;
}
void Person::Print()const
{
	cout << "The name is:" << name << endl;
	cout << "The age is:" << age << endl;
}
Person& Person::operator = (const Person& obj)
{
	if (this != &obj)
	{
		name = obj.name;
		id = obj.id;
		age = obj.age;
	}

	return *this;
}