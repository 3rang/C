#include<stdio.h>
#include<stdlib.h>


#define MAX 65000


int main()
{
	int number;
	int tmp;
	printf("Enter the number in (Dec)\n");
	scanf("%d",&number);
	if(number < 65535)
	{
	printf("Number in HEX before swap = %X \n ",number);
	tmp = number&0xFF00;	
	tmp>>=8;
	number<<=8;
	number = (number|tmp) & 0xFFFF;
	printf("Number in HEX after swap = %X \n ",number);
	}
	else
	{
		printf("out of range--\n");
	}
}
