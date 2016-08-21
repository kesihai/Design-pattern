#include "Builder_Two.h"


Builder_Two::Builder_Two()
{
}


Builder_Two::~Builder_Two()
{
}

void Builder_Two::build_head(Product* product)
{
	product->head = "Builder_Two head";
}

void Builder_Two::build_body(Product* product)
{
	product->body = "Builder_Two body";
}

void Builder_Two::build_foot(Product* product)
{
	product->foot = "Builder_Two foot";
}