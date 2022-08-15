#include<stdio.h>

int main(void)
{
					//	++ y -- permiten incrementar y decrementar directamente una variable 

	int i;
	int a;

	a = 12;
	i = 42;
	printf("%d \n", i);

	i++;				//	43
	printf("%d \n", i);

	i = i + 1;			//	44 es exactamente lo mismo que i++
	printf("%d \n", i);

	printf("i++ => %d \n", i++); 		// sólo hace el incremento pero no asigna
	printf("i => %d \n", i);		// 45  por eso al imprimir ahora i ya esta incrementado
	printf("i++ => %d \n", i++); 		// sólo hace el incremento pero no asigna
	printf("i => %d \n", i);		// 46  por eso al imprimir ahora i ya esta incrementado

	printf("++i => %d \n", ++i); 		// 47 incrementa y asigna
	printf("i => %d \n", i);		// 47 
	printf("++i => %d \n", ++i); 		// 48 incrementa y asigna
	printf("i => %d \n", i);		// 48 

	// printf("++i + i => %d \n", ++i + i); 		// no se puede hacer esto en la misma línea

	printf("++i + a => %d \n", ++i + a); 		// se puede hacer esto en la misma línea, pero con otra variable

	return(0);
}
