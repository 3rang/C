#include<stdio.h>


int main()
{
	char *p="TARANG";
	int count=0;
	while(*p!='\0')
	{
		count++;
		p++;
	}

	printf("String Length = %d \n",count);
	return 0;
}
