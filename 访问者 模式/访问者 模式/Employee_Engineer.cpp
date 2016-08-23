#include "Employee_Engineer.h"
#include "Visitor.h"

Employee_Engineer::Employee_Engineer()
{
}


Employee_Engineer::~Employee_Engineer()
{
}

void Employee_Engineer::Accept(Visitor* visitor)
{
	visitor->Visit(this);
}