#include "Leaf_One.h"


Leaf_One::Leaf_One(string name) :Component(name)
{
	
}


Leaf_One::~Leaf_One()
{
}

void Leaf_One::show()
{
	cout << "I am Leaf_One " << name << endl;
}