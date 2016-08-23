#include "Mid_Boss.h"


Mid_Boss::Mid_Boss()
{
}


Mid_Boss::~Mid_Boss()
{
}
void Mid_Boss::Solve_Request(Request* request)
{
	if (request->num < 20)
	{
		printf("problem be solved by Mid Boss\n");
	}
	else if (Pre_boss == NULL)
	{
		printf("problem couldn't be solved\n");
	}
	else  Pre_boss->Solve_Request(request);
}
