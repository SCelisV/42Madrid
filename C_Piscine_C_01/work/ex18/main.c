#include<stdio.h>

// tablas - arrays - matrices

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero sobre int", que posee la dirección del primer int
   // pero realmente no existe, en la pila se han guardado 3 int
   int   tab[3];

   // ver la dirección del primer elemento de la tabla
   tab[0] = 478;
   printf("tab[0] = 478: %d \n", *tab);

   // tab[0] = 478: 478  

   return (0);

}
