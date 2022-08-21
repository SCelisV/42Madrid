#include<stdio.h>

// tablas - arrays - matrices

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero sobre int", que posee la dirección del primer int
   // pero realmente no existe, en la pila se han guardado 3 int
   int   tab[3];

   // ver la dirección del elemento [1] de la tabla
   tab[1] = 145;
   printf("*(tab + 1) %d \n", *(tab + 1));

   // *(tab + 1) 145

   return (0);

}

/*
tab[1] es equivalente a *(tab + 1) 
tab[n] es equivalente a *(tab + n) 
*/