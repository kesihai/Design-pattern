#pragma once
#include "Builder_One.h"
#include "Builder_Two.h"

class Director
{
public:
	Director();
	~Director();
	Product* GetProduct();
	void SetBuilder(Builder* builder);
	void Construct();
private:
	Builder* builder;
	Product* product;
};

