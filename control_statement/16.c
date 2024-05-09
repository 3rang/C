#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	printf("enter the number \n");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		if(i*i == num){
			printf("Yes \n");
			printf(" %d^2 =  %d ",i,num);
			break;
		}
		else if((num-1) == i)
		{
			printf("No\n");
		}

	}
		printf("\n");
	return 0;
}
