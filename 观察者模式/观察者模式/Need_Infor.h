#ifndef _NEED_INFOR_H_
#define _NEED_INFOR_H_

/*
 每个人都可以是通知者,这里有一个疑问，就是可能通知的
*/
#include <list>
#include <iostream>
#include <string>
using namespace std;

class Need_Infor{
public:
	virtual void Add(Need_Infor* cur) = 0;
	virtual void Remove(Need_Infor* cur) = 0;
	virtual void Notify()=0;
	virtual void Update() = 0;
};
#endif