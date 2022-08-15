#include <stdio.h>

void fct(void);		// funcion que no recibe nada ni devuelve nada


int main(void){
	fct();
	fct();
	fct();
	fct();
	fct();
	return(0);
}


void fct(void){
	printf("\n");
	printf("Hello world \n");
}

