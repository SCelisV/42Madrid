// un puntero sobre void
// una puntero es una dirección 
// *int *char nos permite definir que es lo que hay en la dirección

#include<stdio.h>

int     main(void)
{

   // declaración de un void 
   void  *ptr;
   int   *ptr_i;
   char  *ptr_c;

   ptr_i = ptr_c;

   printf("prt: %p \n", ptr);
// prt: (nil) 

   printf("prt_i: %p \n", ptr_i);
// prt_i: 0x5635ea1d7060 

   printf("prt_c: %p \n", ptr_c);
// prt_c: 0x5635ea1d7060 

   return (0);

}

/*

Son direcciones pero no son iguales, una es de tipo entero y otra es de tipo char

work/ex36/main.c: In function ‘main’:
work/ex36/main.c:21:10: warning: assignment to ‘int *’ from incompatible pointer type ‘char *’ [-Wincompatible-pointer-types]
   15 |    ptr_i = ptr_c;
      |          ^

*/