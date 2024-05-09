#include<stdio.h>

int main()
{
	int i,j,k;
	printf("enter the number 1\n");
	scanf("%d",&i);
	printf("enter the number 2\n");
	scanf("%d",&j);
	printf("enter the number 3\n");
	scanf("%d",&k);

	printf("Biggest number is (using else if...)=  "); 
	if((i>j) && (i>k))
	{
		printf(" %d \n",i);
	}
	else if((j>i) && (j>k))
	{
		printf(" %d \n",j);

	}
	else
	{
		printf(" %d \n",k);
	}

 // Using ternary operator
    int biggest = (i >= j && i >= k) ? i : ((j >= i && j >= k) ? i : k);
    printf("Using ternary operator: %d is the biggest.\n", biggest);

    return 0;
}
