#include<stdio.h>
#include<stdlib.h>

#define MAX 65000

int main()
{
	float numBer;
	printf("Enter the Number (1- %d)\n",MAX);
	scanf("%d",&numBer);


	if ((numBer > 0) && (numBer <=65000))
	{
		int i=0;
		char *ptr;

		ptr=&numBer;


		for(i=31;i>=0;i--)
		{
			(*ptr)>>i&1?printf("1"):printf("0");
		}
		printf("\n");

	}
	else
	{
		printf("Out of Range..\n");
	}
}
