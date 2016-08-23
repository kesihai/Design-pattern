#pragma once
#include "Visitor.h"
class Visitor_Vocation :
	public Visitor
{
public:
	Visitor_Vocation();
	~Visitor_Vocation();
	void Visit(Employee* employee);
};

