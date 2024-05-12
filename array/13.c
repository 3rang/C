#include<stdio.h>


int main()
{
	int num,i,k;

	printf("enter the number\n");
	scanf("%d",&num);
	

	int buf[num];

	for(i=0;i<num;i++)
	{
		buf[i]=(i+1)*(i+1);
		printf("i = %d \n",buf[i]);
		k+=buf[i];
	}

	printf("Sum = %d \n",k);

}
