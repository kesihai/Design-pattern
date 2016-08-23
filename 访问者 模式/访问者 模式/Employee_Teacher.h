#pragma once
#include "Employee.h"
class Employee_Teacher :
	public Employee
{
public:
	Employee_Teacher();
	~Employee_Teacher();
	void Accept(Visitor* visitor);
};

