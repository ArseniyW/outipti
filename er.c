#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;
	a = atoi(argv[1]);
	if (a >-10 && a<10)
		printf("однозначное\n");	
	else
		printf("двухзначное\n");
	{
		if(a%2==0)
	printf("четное");
		else
			printf("нечетное");
	}

}
	
