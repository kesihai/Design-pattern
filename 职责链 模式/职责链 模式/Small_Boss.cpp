#include "Small_Boss.h"


Small_Boss::Small_Boss()
{
}


Small_Boss::~Small_Boss()
{
}

void Small_Boss::Solve_Request(Request* request)
{
	if (request->num < 10)
	{
		printf("problem be solved by Small Boss\n");
	}
	else if (Pre_boss == NULL)
	{
		printf("problem couldn't be solved\n");
	}
	else  Pre_boss->Solve_Request(request);
}
