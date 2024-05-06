#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	printf("Enter the char\n");
	scanf("%c",&ch);


	if (ch >= 'a' && ch <= 'z')
	{
		ch-=32;
		printf("Result = %c \n",ch);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch+=32;
		printf("Result = %c \n",ch);
	}
	else
	{
		printf("not a char\n");
	}

}
