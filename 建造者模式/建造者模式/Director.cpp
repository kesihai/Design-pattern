#include "Director.h"


Director::Director()
{
}


Director::~Director()
{
}

Product* Director::GetProduct()
{
	return product;
}

void Director::SetBuilder(Builder* builder)
{
	this->builder = builder;
}

void Director::Construct()
{
	product = new Product();
	builder->build_body(product);
	builder->build_foot(product);
	builder->build_head(product);
}
