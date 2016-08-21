#pragma once
#include <stdio.h>
#include "Animal.h"
class Duck :
	public Animal
{
public:
	Duck();
	~Duck();
	virtual void shut();
};

