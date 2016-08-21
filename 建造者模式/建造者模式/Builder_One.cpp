#include "Builder_One.h"

Builder_One::Builder_One()
{

}


Builder_One::~Builder_One()
{

}

void Builder_One::build_head(Product* product)
{
	product->head = "build_one head";
}

void Builder_One::build_body(Product* product)
{
	product->body = "build_one body";
}

void Builder_One::build_foot(Product* product)
{
	product->foot = "build_one foot";
}