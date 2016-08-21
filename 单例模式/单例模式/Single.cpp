#include "Single.h"


Single::Single()
{
}

Single::~Single()
{
	if (cur != NULL) delete cur;
}

//饿汉模式的单例模式
//Single* Single:: cur=Single::GetInstance();


//懒汉模式 的单例模式
Single* Single::cur = NULL;

Single* Single::GetInstance()
{
	if (cur == NULL) cur = new Single();
	return cur;
}
