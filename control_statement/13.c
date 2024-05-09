#include<stdio.h>
#include<stdio.h>

int main()
{
	int num,pos;

	printf("enter the number \n");
	scanf("%d",&num);

	printf("enter the pos \n");
	scanf("%d",&pos);

	int i;
	for(i=31;i>=0;i--)
	{
		num&(1<<i)?printf("1"):printf("0");
		if(i==(pos-1))
		num^(1<<i)?printf("1"):printf("0");
		if(i%8==0)
			printf(" ");
	}

			printf("\n");

}
