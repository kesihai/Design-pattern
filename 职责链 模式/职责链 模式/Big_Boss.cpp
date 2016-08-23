#include "Big_Boss.h"


Big_Boss::Big_Boss()
{
}


Big_Boss::~Big_Boss()
{
}
void Big_Boss::Solve_Request(Request* request)
{
	if (request->num < 30)
	{
		printf("problem be solved by Big Boss\n");
	}
	else if (Pre_boss == NULL)
	{
		printf("problem couldn't be solved\n");
	}
	else  Pre_boss->Solve_Request(request);
}