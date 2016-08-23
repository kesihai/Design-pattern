#include "Employee_Teacher.h"
#include "Visitor.h"

Employee_Teacher::Employee_Teacher()
{
}


Employee_Teacher::~Employee_Teacher()
{
}
void Employee_Teacher::Accept(Visitor* visitor)
{
	visitor->Visit(this);
}
