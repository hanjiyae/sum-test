#include "sum.h"

int sum(int a, int b)
{
	
	int res = 0;
	int i;

	for (i=a; i<=b; i++)
	{
		res += i;
	}

	return res;

}



