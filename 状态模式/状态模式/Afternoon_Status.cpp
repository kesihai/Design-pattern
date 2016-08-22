#include "Afternoon_Status.h"


Afternoon_Status::Afternoon_Status()
{
}


Afternoon_Status::~Afternoon_Status()
{
}

void Afternoon_Status::Write_Program(Work* work)
{
	if (work->hour >= 12 && work->hour <= 20)
	{
		printf("now is Afternoon and I am tired\n");
	}
	else
	{
		work->Set_Status(new Evening_Status());
		work->Work_Hard();
	}
}