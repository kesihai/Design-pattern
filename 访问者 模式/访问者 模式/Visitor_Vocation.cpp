#include "Visitor_Vocation.h"


Visitor_Vocation::Visitor_Vocation()
{
}


Visitor_Vocation::~Visitor_Vocation()
{
}

void Visitor_Vocation::Visit(Employee* employee)
{
	employee->vocation += 2;
}