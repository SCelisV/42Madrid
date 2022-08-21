#include<stdio.h>

// cadenas de caracteres
// en 'c' no existen las cadenas de caracteres, es una serie de bytes terminada por un byte con valor ascii 0. '\0';
// un conjunto de caracteres que termina por un 0, es equivalente a una tabla de char 
// accedemos a una cadena de caracteres con el *char, por que es la dirección del primer caracter y luego avanzar hasta encontrar el caracter con valor 0

int     main(void)
{

   // Declarando una tabla sin tamaño y asignando directamente un valor
   char  str[] = "string";

   // Ahora si que puedo modificar el valor de la posición 0 de mi "cadena de caracteres"
   str[0] = 'o';

   printf("str: %s y  *str: %c \n", str, *str);
   // str: otring y  *str: o 


   return (0);

}