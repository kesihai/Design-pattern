#include "Cofe_Sell.h"


Cofe_Sell::Cofe_Sell(string name)
{
	this->name = name;
}


Cofe_Sell::~Cofe_Sell()
{
	
}

void Cofe_Sell::sell()
{
	cout << "����һ�� "<<name << "  ����"<<endl;
}
