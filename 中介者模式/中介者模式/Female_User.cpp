#include "Female_User.h"


Female_User::Female_User(Media* media, string name) :User(name)
{
	this->media = media;
}


Female_User::~Female_User()
{

}

void Female_User::Send(User *to, string msg)
{
	media->Send(this, to, msg);
}

void Female_User::Recv(User *from, string msg)
{
	cout << name << " �յ� " << from->name << "��Ϣ: " << msg << endl;
}