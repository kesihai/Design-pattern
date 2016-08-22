#include "Composite.h"


Composite::Composite(string name) :Component(name)
{
}


Composite::~Composite()
{
}

void Composite::show()
{
	cout << name << endl;
	list<Component*>::iterator it;
	for (it = my_list.begin(); it != my_list.end(); ++it)
	{
		(*it)->show();
	}
}

void Composite::Add(Component* component)
{
	my_list.push_back(component);
}

void Composite::Remove(Component* component)
{
	my_list.remove(component);
	
	/*
	list<Component*>::iterator it;
	for (it = my_list.begin(); it != my_list.end();++it)
		if (*it == component)
		{
			my_list.remove(component);
			break;
		}
	*/
}