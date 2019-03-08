#include "sum.h"

int sum (int a, int b)
{
	int i;
	int sum=0;

	for(i=a; i<=b; i++)
	{
		sum += i;
	}
	return sum;
}



