#include "Work.h"
#include "stdio.h"

int main()
{
	Work* work = new Work();
	work->Work_Hard();

	work->hour = 13;
	work->Work_Hard();

	work->hour = 9;
	work->Work_Hard();

	work->hour = 21;
	work->Work_Hard();

	work->hour = 19;
	work->Work_Hard();

	getchar();
	return 0;
}