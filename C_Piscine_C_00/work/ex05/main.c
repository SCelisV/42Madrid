#include<stdio.h>

// una variable no se puede declarar dos veces en el mismo ambito
// ambito global
int a;

int main() // ambito de la funcion 
{

	// a = 12; 		//cambio el valor del ambito global
	{
		int a;
		a = 42;

		printf("ambito de la función: %d \n", a);
	}

	a = 12;			//cambio el valor del ambito global

	printf("ambito global: %d \n", a);

}
