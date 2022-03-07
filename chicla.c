#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int x = 2, y = 7, t;
	t = 2;
	x = 7;
	y = t;
	printf("t = %d\n x = %d\n y = %d\n", t, x, y);
}
