/*
�Ž�ģʽ���� �����ж���仯����ʱ�������ֻ�Ʒ�ƿ����ж�������ֻ��������Ҳ�ж������������
����������Ž�ģʽ�������ڱ�̣����ǿ��Խ�ÿ�����е����ʵ������ȥ��Ȼ�������ͱȽϺ�ά��
*/

#include <stdio.h>
#include "HTC_Phone.h"
#include "Iphone_Phone.h"
#include "Soft_Call.h"
#include "Soft_Game.h"

int main()
{
	Phone* phone;
	Soft* soft;

	phone = new Iphone_Phone();
	soft = new Soft_Call();
	phone->SetSoft(soft);
	phone->run();

	delete soft;

	soft = new Soft_Game();
	phone->SetSoft(soft);
	phone->run();

	delete phone;
	delete soft;

	phone = new HTC_Phone();
	soft = new Soft_Call();
	phone->SetSoft(soft);
	phone->run();
	delete soft;

	soft = new Soft_Game();
	phone->SetSoft(soft);
	phone->run();

	delete phone;
	delete soft;

	getchar();
	return 0;
}