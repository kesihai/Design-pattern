#ifndef _NEED_INFOR_H_
#define _NEED_INFOR_H_

/*
 ÿ���˶�������֪ͨ��,������һ�����ʣ����ǿ���֪ͨ��
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