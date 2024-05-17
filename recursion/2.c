#include<stdio.h>
#include<stdlib.h>
int fibonacci(int num)
{
	if(num==0 || num==1)
	{
		if(num==0)
		return 0;
		if(num==1)
		return 1;
	}
	else
	{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}
int main()
{
	int num,i=0;
	printf("Enter the number for print 'N' Fibonacci numbers\n");
	scanf("%d",&num);
	while(i<num){
	printf("%d ",fibonacci(i));
	i++;
	}
	printf("\n");
}
