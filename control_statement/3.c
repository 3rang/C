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
		result = result*10 + (num%10) ;
		num = num/10;
	}
	printf("%d",result);
}
