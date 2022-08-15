#include<stdio.h>

// ambito global
int a;

int main(void)
{

	{
		a = 42;
	}
	printf("%d \n", a);

}
