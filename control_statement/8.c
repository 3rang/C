#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	printf("Enter the number \n");
	scanf("%d",&num);
	for (i=31;i>=0;i--)
	{
		(num&(1<<i))?printf("1"):printf("0");
		if(i%8==0)
		printf(" ");
	}
	printf("\n");
	return 0;
}
