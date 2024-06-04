#include<stdio.h>



int main()
{
	char p[20]="Hello World!";
	char q[20];
	//char *pp=p;
//	char *qq=q;

	//for(;*pp;*qq=*pp,qq++,pp++);
	for(int i=0;q[i]=p[i];i++);

	printf("%s\n",q);
	
	return 0;
}
