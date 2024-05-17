#include<stdio.h>

int palindrome(int num)
{
	static int i;
		if(num)
		{
		i=i*10+(num%10);
		num/=10;
		return palindrome(num);		
		}
		else
		{
			return i;
		}
}

int main()
{

	int num,i;
	printf("enter the number (positive)\n");
	scanf("%d",&num);
	i=palindrome(num);
	if(i==num){
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
}
