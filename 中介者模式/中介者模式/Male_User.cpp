#include "Male_User.h"


Male_User::Male_User(Media* media, string name) :User(name)
{
	this->media = media;
}


Male_User::~Male_User()
{

}

void Male_User::Send(User *to, string msg)
{
	media->Send(this, to, msg);
}

void Male_User::Recv(User *from, string msg)
{
	cout << name << " 收到 " << from->name << "信息: " << msg << endl;
}