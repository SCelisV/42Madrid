#include<stdio.h>

// cadenas de caracteres
// en 'c' no existen las cadenas de caracteres, es una serie de bytes terminada por un byte con valor ascii 0. '\0';
// un conjunto de caracteres que termina por un 0, es equivalente a una tabla de char 

int     main(void)
{

   // para movernos por una cadena de caracteres, utilizamos un puntero sobre un char 
   char  *str;

   str   = "string";

   printf("str: %s \n", str);
   // str: string

   return (0);

}