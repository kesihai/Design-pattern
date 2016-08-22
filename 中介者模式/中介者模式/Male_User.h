#pragma once
#include "User.h"
#include "Media.h"

class Male_User :
	public User
{
public:
	Male_User(Media* media, string name);
	~Male_User();
	void Send(User *to, string msg);
	void Recv(User *from, string msg);
private:
	Media* media;
};

