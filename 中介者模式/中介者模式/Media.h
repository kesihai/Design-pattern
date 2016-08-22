#ifndef _MEDIA_H_
#define _MEDIA_H_
#include <string>
#include "User.h"
using namespace std;

class Media{
public:
	virtual void Send(User *from, User* to, string msg) = 0;
};

#endif