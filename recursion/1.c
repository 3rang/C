#include<stdio.h>

int factorial(int num)
{
	if(num==0)
	{
		return 1;

	}
	else
	{
		return num*factorial(num-1);
	}


}
int main()
{
	int num,i;
	printf("Enter the number \n");
	scanf("%d",&num);

	printf("Factorial =  %d \n",factorial(num));
}
