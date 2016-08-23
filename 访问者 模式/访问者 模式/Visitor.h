#ifndef _VISITOR_H_
#define _VISITOR_H_
#include "Employee.h"

class Visitor{
public:
	virtual void Visit(Employee* employee) = 0;
};

#endif