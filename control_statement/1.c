#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	int result=1;
	while(num)
	{
		result*= num;
		num--;
	}
	printf("result = %d \n",result);
}
