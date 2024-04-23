#include<stdio.h>
#include<stdlib.h>

#define MAX 65000

int main()
{
	int numBer;
	printf("Enter the Number (1- %d)\n",MAX);
	scanf("%d",&numBer);


	if ((numBer > 0) && (numBer <=65000))
	{
		(numBer & 1) ?printf("Odd\n"):printf("Even\n");

	}
	else
	{
		printf("Out of Range..\n");
	}
}
