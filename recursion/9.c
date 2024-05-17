#include<stdio.h>

int perfect_num(int num,int i,int tmp)
{
	if(i<num)
	{
		i++;
		if(num%i==0 && i!=num){
	//	printf(" %d",i);
		tmp+=i;
		}
		return perfect_num(num,i,tmp);
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
	tmp=perfect_num(num,0,tmp);
	if(tmp==num)
	{
	printf(" Perfect Number\n");
	}
	else
	{
	printf(" Not Perfect Number\n");
	}
}
