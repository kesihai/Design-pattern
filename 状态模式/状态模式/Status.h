#ifndef _STATUS_H_
#define _STATUS_H_

#include <stdio.h>
#include "Work.h"

class Status{
public:
	virtual void Write_Program(Work* work);
};

#endif