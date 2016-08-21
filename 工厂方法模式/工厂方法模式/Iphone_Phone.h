#pragma once

#ifndef IPHONE_PHONE_H_
#define IPHONE_PHONE_H_

#include "Phone.h"
#include <stdio.h>
class Iphone_Phone :public Phone
{
public:
	Iphone_Phone();
	~Iphone_Phone();
	void call();
};

#endif