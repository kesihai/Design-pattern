#include <stdio.h>
#include <iostream>
#include "Single.h"
int main()
{
	Single* f = Single::GetInstance();
	Single*ff = Single::GetInstance();
	f->ans = "hello";
	cout << f->ans << endl;
	ff->ans = "world";
	cout << f->ans << endl;
	getchar();
	return 0;
}