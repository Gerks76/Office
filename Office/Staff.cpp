#include "Staff.h"

Staff::Staff()
{
	bonus = 0;
}

Staff::Staff(string name, string position, float salary, float bonus):Employee(name,position,salary)
{
	this->bonus = bonus;
}

void Staff::show() const
{
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;
	cout << "Salary: " << salary << endl;
	cout << "Bonus: " << bonus << endl;
}

float Staff::calcSalary() const
{
	return salary+bonus;
}
