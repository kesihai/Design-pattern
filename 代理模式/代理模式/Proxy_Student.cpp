#include "Proxy_Student.h"


Proxy_Student::Proxy_Student()
{
	big = new Big_Student();
}


Proxy_Student::~Proxy_Student()
{
	delete big;
}

void Proxy_Student::study()
{
	big->study();
}
