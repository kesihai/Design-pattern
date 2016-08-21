#pragma once
class Key
{
public:
	Key();
	~Key();
	int* a;
	virtual  Key* Clone()=0;
	virtual void show()=0;
};