#include <stdio.h>
#include "Big_Boss.h"
#include "Mid_Boss.h"
#include "Small_Boss.h"

#undef main

int main()
{
	Request* request = new Request();
	Big_Boss* big_boss = new Big_Boss();
	Mid_Boss* mid_boss = new Mid_Boss();
	Small_Boss* small_boss = new Small_Boss();

	mid_boss->Set_Boss(big_boss);
	small_boss->Set_Boss(mid_boss);
	
	request->num = 9;
	small_boss->Solve_Request(request);
	request->num = 19;
	small_boss->Solve_Request(request);
	request->num = 29;
	small_boss->Solve_Request(request);
	request->num = 39;
	small_boss->Solve_Request(request);
	getchar();
	return 0;
}