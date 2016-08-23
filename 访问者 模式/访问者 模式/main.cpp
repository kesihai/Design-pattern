#include <stdio.h>
#include "Employee_Engineer.h"
#include "Employee_Teacher.h"
#include "Visitor_Salary.h"
#include "Visitor_Vocation.h"
#include "Employees.h"

int main()
{
	Employee* teacher_1 = new Employee_Teacher();
	Employee* teachar_2 = new Employee_Teacher();
	Employee* enginner = new Employee_Engineer();
	Employees* all_employee = new Employees();
	all_employee->Add(teacher_1);
	all_employee->Add(teachar_2);
	all_employee->Add(enginner);

	Visitor* salary = new Visitor_Salary();
	Visitor* vocation = new Visitor_Vocation();

	all_employee->show();

	all_employee->Set_Visitor(salary);
	all_employee->show();
	all_employee->Set_Visitor(vocation);
	all_employee->show();

	getchar();
	return 0;
}