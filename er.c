#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;
	a = atoi(argv[1]);
	if (a >-10 && a<10)
	{
		if(a==a%2)
	printf("нечетное");
		else
			printf("четное");
	}
}
	
