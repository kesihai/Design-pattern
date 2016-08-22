#pragma once
#include "Status.h"
#include "Evening_Status.h"
class Afternoon_Status :public Status
{
public:
	Afternoon_Status();
	~Afternoon_Status();
	virtual void Write_Program(Work* work);
};

