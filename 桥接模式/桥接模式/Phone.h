#ifndef _PHONE_H_
#define _PHONE_H_
#include "Soft.h"
#include <stdio.h>

class Phone{
public:
	void SetSoft(Soft* soft);
	virtual void run()=0;
	Soft* soft;
};
#endif