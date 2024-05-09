#include<stdio.h>
#include<stdlib.h>

int my_pow(int n,int b)
{
	int temp;
	temp=n;
	while(--b){
		n*=temp;
	}
	return n; 
}
int main()
{
	int num,base;
	printf("enter the number \n");
	scanf("%d",&num);

	printf("enter the power  \n");
	scanf("%d",&base);
	printf("power = %d \n",my_pow(num,base));
}
