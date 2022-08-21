#include<stdio.h>

// cadenas de caracteres
// en 'c' no existen las cadenas de caracteres, es una serie de bytes terminada por un byte con valor ascii 0. '\0';
// un conjunto de caracteres que termina por un 0, es equivalente a una tabla de char 

int     main(void)
{

   // para movernos por una cadena de caracteres, utilizamos un puntero sobre un char 
   char  *str;

   // definimos una constante que no se puede cambiar, esta en una dirección de sólo lectura
   // almacenamos 6 caracteres en la memoria, el código ascii de s, el código ascii de t, ... el código ascii de g, y '\0'
   str   = "string";

   printf("str: %s y  *str: %c \n", str, *str);
   // str: string y  *str: s 

   printf("*str: %c y  str: %s \n", *str, str);
   // *str: s y  str: string

   return (0);

}