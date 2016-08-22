#pragma once
#include "User.h"
#include "Media.h"

class Female_User :public User
{
public:
	Female_User(Media* media,string name);
	~Female_User();
	void Send(User *to, string msg);
	void Recv(User *from, string msg);
private:
	Media* media;
};

