#pragma once
#include "Item.h"
#include <string>
#include <iostream>
using namespace std;

class People :
	public Item
{
public:
	People(string name);
	~People();
	void show();
private:
	string name;
};

