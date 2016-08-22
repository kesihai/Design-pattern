#include "Leaf_Two.h"

Leaf_Two::Leaf_Two(string name) :Component(name)
{

}


Leaf_Two::~Leaf_Two()
{
}

void Leaf_Two::show()
{
	cout << "I am Leaf_Two " << name << endl;

}