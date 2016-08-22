#pragma once
#include "Status.h"
#include "Afternoon_Status.h"

class Morning_Status :public Status
{
public:
	Morning_Status();
	~Morning_Status();
	void Write_Program(Work* work);
};

