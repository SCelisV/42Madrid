#include<stdio.h>

// tablas - arrays - matrices

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero de int", que posee la dirección del primer int
   int     tab[3];

   int   *ptr;

   // asignando "la dirección" de tab al puntero
   ptr = &tab;

   printf("tab: %p \n", tab);
// tab: 0x7ffcceb2474c 

   printf("ptr: %p \n", ptr);
// ptr: 0x7ffcceb2474c 

   return (0);

}
// al compilar da un warning porque en realidad tab ya es un puntero 
/*
work/ex15/main.c:13:8: warning: assignment to ‘int *’ from incompatible pointer type ‘int (*)[3]’ [-Wincompatible-pointer-types]
   13 |    ptr = &tab;
      |        ^
*/