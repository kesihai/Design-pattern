#include<stdio.h>
#include "Client.h"

int main()
{
	Client* client = new Client();
	client->Add_dish("A");
	client->Add_dish("B");
	client->Add_dish("C");
	client->Add_dish("D");
	client->Add_dish("B");
	client->Add_dish("B"); 
	client->Add_dish("D");
	client->Give_Money();
	cout << "生成对象个数 " <<Mune_Sell::count << endl;
	getchar();
	return 0;
}