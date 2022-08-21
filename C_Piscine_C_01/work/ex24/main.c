#include<stdio.h>

// cadenas de caracteres
// en 'c' no existen las cadenas de caracteres, es una serie de bytes terminada por un byte con valor 0. '\0';

int     main(void)
{

   char  c;

   c = '0';

   // imprimir como un numero - %d, el valor ascii de 0 es 48
   printf("%d \n", c);
// 48 

   return (0);

}