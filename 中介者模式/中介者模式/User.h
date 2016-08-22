#ifndef _USER_H_
#define _USER_H_
#include <string>
#include <iostream>
using namespace std;

class User{
public:
	User(string name);
	virtual void Send(User *to, string msg) = 0;
	virtual void Recv(User *from, string msg) = 0;
	string name;
};

#endif