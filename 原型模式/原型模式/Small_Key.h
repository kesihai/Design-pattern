#pragma once
#include "Key.h"
#include <stdio.h>
class Small_Key :public Key
{
public:
	Small_Key();
	~Small_Key();
	Key* Clone();
	void show();
};

