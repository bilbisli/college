#include "Person.h"
#include <iostream>
using namespace std;


class Student : virtual public Person {
private:
	int average;
	string institute;

public:
	Student(string name = "", long id, int age, int aver, string inst = "") :Person(name, id, age), average(aver), institute(inst) { ; }
	~Student() { ; }
	void Print() const;


};
