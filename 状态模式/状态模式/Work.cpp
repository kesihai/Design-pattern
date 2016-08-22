#include "Work.h"
#include "Status.h"
#include "Morning_Status.h"

Work::Work()
{
	cur_status = new Morning_Status();
	hour = 9;
}


Work::~Work()
{
	delete cur_status;
}

void Work::Set_Status(Status* cur)
{
	delete cur_status;
	cur_status = cur;
}

void Work::Work_Hard()
{
	cur_status->Write_Program(this);
}