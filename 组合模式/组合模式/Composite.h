#pragma once
#include "Component.h"
#include <list>

class Composite :
	public Component
{
public:
	Composite(string name);
	~Composite();
	void show();
	void Add(Component* component);
	void Remove(Component* component);
private:
	list<Component*>my_list;
};

