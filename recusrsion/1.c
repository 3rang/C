#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter the number \n");
	scanf("%d",&num);

	while(num)
	{
		printf(" %d\n",(i+=num*(num-1)));
		--num;
	}
}
