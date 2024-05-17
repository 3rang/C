#include<stdio.h>

int sum_digits(int num)
{
	static int tmp=0;
	if(num)
	{
		tmp+=num%10;
		num/=10l;
		return sum_digits(num);
	}
	else
	{
		return tmp;
	}


}
int main()
{
	int num,i;
	printf("Enter the number \n");
	scanf("%d",&num);

	printf("Sum of Digits =  %d \n",sum_digits(num));
}
