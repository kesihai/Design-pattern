#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
{
public:
	Product();
	~Product();
	string head;
	string body;
	string foot;
	void show();
};