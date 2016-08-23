#pragma once
#include "Visitor.h"
class Visitor_Salary :
	public Visitor
{
public:
	Visitor_Salary();
	~Visitor_Salary();
	void Visit(Employee* employee);
};

