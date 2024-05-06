#include<stdio.h>
#include<stdlib.h>

#define CLR_BIT(M,N) M & ~( 1<<(N-1))


int main()
{

	int number,pos;
	printf("enter the number M\n");
	scanf("%d",&number);
	printf("enter the bit position N\n");
	scanf("%d",&pos);


	int result = CLR_BIT(number,pos);

	printf("Result = %d \n",result);

}
