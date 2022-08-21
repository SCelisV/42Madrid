// una utilización común de los punteros 

#include<stdio.h>


int     main(void)
{

   int   *ptr;

   // asigna 42 al puntero
   ptr = 42;

   printf("prt: %p \n", ptr);
   // prt: 0x2a 

   return (0);

}

// Genera un warning porque estoy asignando un valor arbitrario en un puntero de int
/*
work/ex33/main.c: In function ‘main’:
work/ex33/main.c:14:8: warning: assignment to ‘int *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
   12 |    ptr = 42;
*/

