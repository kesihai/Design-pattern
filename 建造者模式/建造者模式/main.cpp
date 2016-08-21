#include <stdio.h>
#include "Director.h"

int main()
{
	Product* product;
	Director* director = new Director();
	Builder* builder = new Builder_One();
	director->SetBuilder(builder);
	director->Construct();
	product = director->GetProduct();
	product->show();
	delete builder;
	delete product;

	builder = new Builder_Two();
	director->SetBuilder(builder);
	director->Construct();
	product = director->GetProduct();
	product->show();
	getchar();
	return  0;
}