#pragma once
#ifndef HTC_PHONE_H_
#define HCT_PHONE_H_

#include<stdio.h>
#include "Phone.h"
class HTC_Phone :public Phone
{
public:
	HTC_Phone();
	~HTC_Phone();
	void call();
};

#endif
