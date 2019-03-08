#include <stdio.h>
#include "sum.h"

int main()
{
	
	int a;
	int b;

	printf("Select one number : ");
	scanf("%d", &a);
	printf("Select other number : ");
	scanf("%d", &b);

	int res = sum(a,b);

	printf("result = %d\n", res);


	return 0;

}







