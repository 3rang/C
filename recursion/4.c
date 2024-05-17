#include<stdio.h>

int reverse(int num)
{
	static int tmp=0;
	if(num)
	{
		tmp=num%10;
		num/=10;
		printf("%d",tmp);
		return reverse(num);
	}


}
int main()
{
	int num,i;
	printf("Enter the number \n");
	scanf("%d",&num);

	printf("Reverse Numer = ");
	reverse(num);
	printf("\n");
}
