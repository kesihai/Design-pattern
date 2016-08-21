#include "Single.h"


Single::Single()
{
}

Single::~Single()
{
	if (cur != NULL) delete cur;
}

Single* Single:: cur=NULL;

Single* Single::GetInstance()
{
	if (cur == NULL) cur = new Single();
	return cur;
}
