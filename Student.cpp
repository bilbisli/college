#include "Student.h"



void Student::Print() const
{
	Person::Print();
	cout << "The average is: " << average << endl;
	cout << "The institute is: " << institute << endl;

}