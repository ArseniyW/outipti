#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a;
	a = atoi(argv[1]);
	if (a>-10 && a<10)
		printf("одназначное = %d\n",a);
	else if (a>-100 && a<100)
	{
		int first;
		int second;
		first = a /10;
		second = a %10;
		printf("сумма =%d\n",first+second);
	}
	else if (a>-1000 && a<1000)
	{
		int first;
		int second;
		int third;
		third = a%10; 
		second = a/10%10;
		first = a/10/10;
		printf("сумма =%d+%d+%d=%d\n",first,second,third,first+second+third);
	}
	else
		printf("error");
			
}


			

