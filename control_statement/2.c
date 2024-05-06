#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);

	int result=0;

	while(num)
	{
		result+= num%10;
		num/=10;
	}
	printf("result = %d \n",result);
}
