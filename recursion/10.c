#include<stdio.h>

int tmp;
int bignumber_ary(int *ar,int num)
{
	if(num)
	{
		if(ar[num]>tmp)
		{
			tmp=ar[num];
		}
		bignumber_ary(ar,--num);
	}
	else
	{
		return tmp;
	}


}
int main()
{
	int num;
	printf("Enter the size of buffer array \n");
	scanf("%d",&num);
	int arry[num],i;
	printf("Enter %d number(s) \n",num);
	for(i=0;i<num;i++)
	{
	scanf("%d",&arry[i]);
	}
	printf("unsorted aarry\n");
	for(i=0;i<num;i++)
	{
	printf(" %d",arry[i]);
	}
	printf("\nBiggest = %d \n",bignumber_ary(arry,num-1));

}
