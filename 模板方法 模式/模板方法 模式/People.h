#ifndef _PEOPLE_H_
#define _PEOPLE_H_
#include <stdio.h>
class People{
public:
	void Get_Salary();
private:
	virtual void Get_Money() = 0;
	virtual void Get_Extra_Money() = 0;
};

#endif