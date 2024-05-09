#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i,z=0,tmp=0;
	printf("Enter the number to check perfect no or not\n");
	scanf("%d",&num);

	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{

			z=num/i;
			tmp+=z;
		//	printf("z = %d tmp =%d \n",z,tmp);
		}

	}
	if(tmp == num)
	printf("Number is Perfect\n");
	else
	printf("Number is Not Perfect\n");

	return 0;
}
