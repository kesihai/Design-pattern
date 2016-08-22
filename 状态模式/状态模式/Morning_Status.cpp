#include "Morning_Status.h"
#include "Work.h"

Morning_Status::Morning_Status()
{
}


Morning_Status::~Morning_Status()
{
}

void Morning_Status::Write_Program(Work* work)
{
	if (work->hour>=8&&work->hour < 12)
	{
		printf("now is Morning and I am fine\n");
	}
	else
	{
		work->Set_Status(new Afternoon_Status());
		work->Work_Hard();
	}
}