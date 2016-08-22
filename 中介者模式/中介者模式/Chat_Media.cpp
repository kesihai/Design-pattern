#include "Chat_Media.h"


Chat_Media::Chat_Media()
{
}


Chat_Media::~Chat_Media()
{
}

void Chat_Media::Send(User *from, User* to, string msg)
{
	if (to != NULL)
	{
		to->Recv(from, msg);
	}
}