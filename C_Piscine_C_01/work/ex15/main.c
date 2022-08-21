#include<stdio.h>

// tablas - arrays - matrices

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero de int", que posee la dirección del primer int
   // pero realmente no existe, en la pila se han guardado 3 int
   int     tab[3];

   int   *ptr;
   // asignando directamente tab al puntero
   ptr = tab;

   printf("tab: %p \n", tab);
// tab: 0x7ffdadfcd32c 

   printf("ptr: %p \n", ptr);
// ptr: 0x7ffdadfcd32c 

   return (0);



}