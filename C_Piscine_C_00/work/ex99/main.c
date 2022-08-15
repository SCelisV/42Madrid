#include<stdio.h>

int fct(void);		// funcion que devuelve un entero


int main(void)
{
	int i;

	i = 0;
	printf("%d \n", i);

	i = fct();
	printf("%d \n", i);
	return(0);
}
