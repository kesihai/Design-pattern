#pragma once
#include "People.h"
#include "Big_Student.h"
class Proxy_Student :
	public Student
{
public:
	Proxy_Student();
	~Proxy_Student();
	void study();
private:
	Big_Student* big;
};

