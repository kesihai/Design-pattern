#include "Evening_Status.h"


Evening_Status::Evening_Status()
{
}


Evening_Status::~Evening_Status()
{
}

void Evening_Status::Write_Program(Work* work)
{
	if (work->hour > 20 || work->hour < 8)
	{
		printf("now is night and I am sleep\n");
	}
	else
	{
		work->Set_Status(new Morning_Status());
		work->Work_Hard();
	}
}