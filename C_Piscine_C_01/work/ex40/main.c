// un puntero sobre void
// una puntero es una dirección 
// *int *char nos permite definir que es lo que hay en la dirección
// tener una dirección no especializada y la especializo (cast) en un char ó un int

// man 2 write --> write permite escribir algo a partir de la memoria, a partir de la dirección, es decir, escribe literalmente lo que le des  binario, etc

// void *
// cuando no se quiere ir a ver lo que hay sino simplemente escribirlo en la salida standard 
// cuando uno quiere asignar memoria y gestionarla ex: una parte de memoria es leida como void, otra leida como si fuera int... etc...

#include<stdio.h>

int     main(void)
{

   // declaración de un void 
   void  *ptr;
   int   *ptr_i;
   char  *ptr_c;

   // no merece la pena
   ptr_i = ptr;

   printf("prt: %p \n", ptr);
// prt: 0x56515b438060 

   printf("prt_i: %p \n", ptr_i);
// prt_i: 0x56515b438060 

   printf("prt_c: %p \n", ptr_c);
// prt_c: (nil) 

   return (0);

}
