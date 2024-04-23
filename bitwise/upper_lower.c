#include<stdio.h>
#include<stdlib.h>

#define MAX 65000

int main()
{
	char chr;
	printf("Enter the char \n");
	scanf("%c",&chr);


	if ((chr >= 'A') && (chr <= 'z'))
	{
		chr^=32;
		printf("new = %c \n",chr);
	}
	else
	{
		printf("Out of Range..\n");
	}
}
