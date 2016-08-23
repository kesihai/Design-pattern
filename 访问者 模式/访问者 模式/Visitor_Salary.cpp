#include "Visitor_Salary.h"


Visitor_Salary::Visitor_Salary()
{
}


Visitor_Salary::~Visitor_Salary()
{
}

void Visitor_Salary::Visit(Employee* employee)
{
	employee->Salary += 500;
}