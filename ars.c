#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	int last;//последняя цифра
	int number; 
	printf("last=%d", 6);
	number = atoi(argv[1]);
	last = number % 10;
	printf("last = %d", last);
}

