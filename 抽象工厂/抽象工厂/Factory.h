#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "Mdl_Hanburger.h"
#include "Mdl_Cole.h"
#include "Kfc_Hanburger.h"
#include "Kfc_Cole.h"

class Factory{
public:
	virtual Hanburger* Create_Hanburger()=0;
	virtual Cole* Create_Cole() = 0;
};

#endif