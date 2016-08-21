#ifndef FACTORY_H_
#define FACTORY_H_

#include "Phone.h"

class Factory{
public:
	virtual Phone* Create_Phone() = 0;
};
#endif