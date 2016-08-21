#pragma once
#include "Animal.h"
#include "Bird.h"

class Bird_Adapter :
	public Animal
{
public:
	Bird_Adapter();
	~Bird_Adapter();
	virtual void shut();
private:
	Bird bird;
};

