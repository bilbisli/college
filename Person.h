#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Person
{
protected:
	string name;
	long id;
	int age;
public:
	Person() :name("def name"), id(000000000), age(18) {};//def ctor
	Person(string name_, long id_, int age_);//ctor
	Person(const Person& other);//cope cctor
	virtual ~Person() = 0 {};// pure virtual
	Person & operator = (const Person&);//operator equal between Person
	virtual void Print()const;// print data
};
