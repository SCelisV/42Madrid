#include<stdio.h>

// cadenas de caracteres
// en 'c' no existen las cadenas de caracteres, es una serie de bytes terminada por un byte con valor ascii 0. '\0';
// un conjunto de caracteres que termina por un 0, es equivalente a una tabla de char 

int     main(void)
{

   char  c;

   c = '\0';

   // imprimir como un numero - %d, el valor ascii de '\0' es 0
   printf("%d \n", c);
// 0 

   return (0);

}