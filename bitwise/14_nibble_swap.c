#include<stdio.h>
#include<stdlib.h>


int main()
{
	int number;
	printf("Enter the number (max. 65000)\n");

	scanf("%d",&number);

	int i,tmp;
	for(i=31;i>=0;i--)
		number & (1 << i) ? printf("1"):printf("0");
	printf("\n");

	int tmp1,tmp2,tmp3;

	tmp1=number;
	tmp2=number;
	tmp3=number;

	tmp1<<=28;
	tmp1 = tmp1&0xF0000000;

	tmp2>>=28;
	tmp2 = tmp2&0x0000000F;
		
	tmp3 = number & 0x0FFFFFF0;

	number = tmp1|tmp2|tmp3;
	printf("After swap\n");
	
	for(i=31;i>=0;i--)
	number & (1 << i) ? printf("1"):printf("0");
	printf("\n");
}
