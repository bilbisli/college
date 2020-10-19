#pragma once

#include Student.h
#include Employee.h

class WorkingStudent : virtual public Student, virtual public Employee
{
protected:
	bool institute_same;

public:
	WorkingStudent(const string& name = "def name", const long& id = 0, const int& age = 18, const float& salary = 0, const int& average = 0, const bool& institute_same_ = false) :
		Employee(name, id, age, salary), Student(name, id, age, average), institute_same(institute_same_) {}
	WorkingStudent(const WorkingStudent& other) : Employee(other), Student(other), institute_same(other.institute_same) {}
	void Print() const {
		Student::Print();
		cout << "Is he working at the same institute? " << institute_same << endl;
	}
};