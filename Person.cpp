#include "Person.h"

Person::Person(string name_, long id_, int age_)
{
	if (strlen(name_) > 10)
		cout << "The name biger from ten letters" << endl;
		exit(1);
	name = name_;
	id = id_;
	age = age_;
}

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
		name = obj.name_;
		id = obj.id_;
		age = obj.age_;
	}

	return *this;
}
