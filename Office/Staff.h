#pragma once
#include "Employee.h"

class Staff :
    public Employee
{
protected:
    float bonus;
public:
    Staff();
    Staff(string name, string position, float salary, float bonus);

    void show()const override;
    float calcSalary()const override;
};

