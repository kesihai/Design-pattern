#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

class Visitor;
class Employee{
public:
	Employee();
	virtual void Accept(Visitor* visitor) = 0;
	int Salary;
	int vocation;
};
#endif 