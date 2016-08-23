#pragma once
#include "Employee.h"
class Employee_Engineer :
	public Employee
{
public:
	Employee_Engineer();
	~Employee_Engineer();
	void Accept(Visitor* visitor);
};

