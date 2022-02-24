#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;
	int b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (a>b)
		printf("a=%d",a);
	else
		printf("b=%d",b);
}
