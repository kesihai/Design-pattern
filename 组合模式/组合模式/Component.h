#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <string>
#include <iostream>

using namespace std;

class Component{
public:
	virtual void show()=0;
	string name;
	Component(string name);
	virtual void Add(Component* component){}
	virtual void Remove(Component* component){}
};

#endif