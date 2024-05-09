#include<stdio.h>

int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);

	int i,j,k;
	printf("Binary\n");
	for(i=31;i>=0;i--)
	{
		num&(1<<i)?printf("1"):printf("0");
		if(i%8==0)
		printf(" ");
	}
	printf("\n");
	printf("Complement Binary\n");
	j=~num;
	for(i=31;i>=0;i--)
	{
		j&(1<<i)?printf("1"):printf("0");
		if(i%8==0)
		printf(" ");
	}

	printf("\n");
	printf("Complement Oct\n");
	printf(" %o \n",j);
	printf("\n");
	printf("Complement HEX\n");
	printf(" %X \n",j);
	printf("\n");
	printf("Complement Dec\n");
	printf(" %d \n",j);
	printf("\n");
}

