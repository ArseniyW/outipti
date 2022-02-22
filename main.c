#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;
	a = atoi(argv[1]);
	if (a >-10 && a<10 )
	{
		printf(" a = однозначное\n");
		printf("%d",a);
		if (a>0)
			printf("положительное");
		else
			printf("отрицательное");
	}
 
	else if(a >-100 && a<100)	
		printf("двузначное");
	else if (a >-1000 && a<1000)
		printf("трехзначное");
	else
		printf("слишком большое");
	return 0;
}

	
