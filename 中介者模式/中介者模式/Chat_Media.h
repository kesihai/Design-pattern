#pragma once
#include "Media.h"
class Chat_Media :
	public Media
{
public:
	Chat_Media();
	~Chat_Media();
	void Send(User *from, User* to, string msg);
};

