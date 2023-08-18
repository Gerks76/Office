#include "Employee.h"

Employee::Employee()
{
	name = "no name";
	position = "no position";
	salary = 0;
}

Employee::Employee(string name, string position, float salary)
{
	this->name = name;
	this->position = position;
	this->salary = salary;
}

void Employee::show() const
{
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;
	cout << "Salary: " << salary << endl;
}

float Employee::calcSalary() const
{
	return salary;
}
