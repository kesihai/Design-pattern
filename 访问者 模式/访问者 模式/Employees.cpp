#include "Employees.h"
#include "Visitor.h"

Employees::Employees()
{
}


Employees::~Employees()
{
}

void Employees::Set_Visitor(Visitor* visitor)
{
	list<Employee*>::iterator it;
	for (it = my_list.begin(); it != my_list.end(); ++it)
		(*it)->Accept(visitor);
}

void Employees::show()
{
	list<Employee*>::iterator it;
	for (it = my_list.begin(); it != my_list.end(); ++it)
		printf("%d %d\n", (*it)->Salary, (*it)->vocation);
	printf("\n");
}
void Employees::Add(Employee* employee)
{
	my_list.push_back(employee);
}
void Employees::Remove(Employee* employee)
{
	my_list.remove(employee);
}


