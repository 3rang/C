#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	printf("enter 2 number \n");
	scanf("%d",&a);
	scanf(" %d",&b);

	if (((a&b) == a) && ((a&b) == b) )    // other logic a^b
	{
		printf("Same\n");
	}
	else
	{
		printf("Not Same\n");
	}

	return 0;
}
