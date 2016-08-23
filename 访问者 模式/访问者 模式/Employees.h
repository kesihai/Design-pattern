#pragma once
#include "Visitor.h"
#include "Employee.h"
#include <list>
using namespace std;

class Employees
{
public:
	Employees();
	~Employees();
	void Set_Visitor(Visitor* visitor);
	void show();
	void Add(Employee* employee);
	void Remove(Employee* employee);
private:
	list<Employee*>my_list;
};

