#include <stdio.h>
#include "Composite.h"
#include "Leaf_One.h"
#include "Leaf_Two.h"


int main()
{
	Component* leaf_one = new Leaf_One("one");
	Component* leaf_two = new Leaf_Two("two");
	Component* composite = new Composite("father");
	composite->Add(leaf_one);
	composite->Add(leaf_two);

	Component* leaf_one_1 = new Leaf_One("one");
	Component* leaf_two_1 = new Leaf_Two("two");
	Component* composite_1 = new Composite("father");
	composite_1->Add(leaf_one_1);
	composite_1->Add(leaf_two_1);
	composite->Add(composite_1);

	composite->show();

	/*
	composite_1->Remove(leaf_one_1);
	composite->show();
	*/
	getchar();
	return 0;
}