#pragma once
#include "Status.h"
#include "Work.h"
#include "Morning_Status.h"

class Evening_Status :
	public Status
{
public:
	Evening_Status();
	~Evening_Status();
	void Write_Program(Work* work);
};

