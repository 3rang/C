#include<stdio.h>

int divisors_sum(int num,int i,int tmp)
{
	if(i<num)
	{
		i++;
		if(num%i==0 && i!=num){
		printf(" %d",i);
		tmp+=i;
		}
		return divisors_sum(num,i,tmp);
	}
	else
	{	
		return tmp;
	}


}
int main()
{
	int num,tmp=0;
	printf("Enter the number \n");
	scanf("%d",&num);
	tmp=divisors_sum(num,0,tmp);
	printf("\nSum =  %d \n",tmp);
}
