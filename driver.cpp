#include "WorkingStudent.h"

#define NO_ERRORS 0

void printAll(Person**, int);

int main()
{
	int size, type;

	cout << "Enter number of people to add: ";
	cin >> size;
	Person** arr = new Person*(size)
	for (int i = 0; i < size; ++i)
	{
		do
		{
			cout << "Choose a type for person number " << i + 1 << "[(1) Student (2) Employee (3) Working Student: ";
			cin >> type;
			switch (type)
			{
			case 1:
				arr[i] = new Student;
				break;
			case 2:
				arr[i] = new Employee;
				break;
			case 3:
				arr[i] = new WorkingStudent;
				break;
			default:
				cout << "wrong input - try again" << endl;
				break;
			}
		} while (type != 1 && type != 2 && type != 3);
	}
	printAll(arr, size);

	return NO_ERRORS
}

void printAll(Person** arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i]->Print();
	}
}