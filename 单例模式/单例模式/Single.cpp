#include "Single.h"


Single::Single()
{
}

Single::~Single()
{
	if (cur != NULL) delete cur;
}

//����ģʽ�ĵ���ģʽ
//Single* Single:: cur=Single::GetInstance();


//����ģʽ �ĵ���ģʽ
Single* Single::cur = NULL;

Single* Single::GetInstance()
{
	if (cur == NULL) cur = new Single();
	return cur;
}
