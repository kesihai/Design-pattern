#include <stdio.h>
#include "Proxy_Student.h"

int main()
{
	Student* student = new Proxy_Student();
	student->study();
	getchar();
	return 0;
}
