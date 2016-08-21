#pragma once
#include "Key.h"
#include <stdio.h>
class Big_Key :
	public Key
{
public:
	Big_Key();
	~Big_Key();
	Key* Clone();
	void show();
};

