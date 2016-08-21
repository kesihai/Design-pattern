#include "People.h"


People::People(string name)
{
	this->name = name;
}


People::~People()
{

}

void People::show()
{
	cout << name << " ";
}
