/*
桥接模式用于 对象有多个变化方向时，例如手机品牌可能有多个，而手机软件可能也有多个，对于这种
情况可以用桥接模式，方便于编程，我们可以将每次运行的软件实例传进去，然后这样就比较好维护
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