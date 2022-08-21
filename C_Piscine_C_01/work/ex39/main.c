// un puntero sobre void
// una puntero es una dirección 
// *int *char nos permite definir que es lo que hay en la dirección
// tener una dirección no especializada y la especializo (cast) en un char ó un int

#include<stdio.h>

int     main(void)
{

   // declaración de un void 
   void  *ptr;
   int   *ptr_i;
   char  *ptr_c;

   ptr_c = ptr;

   printf("prt: %p \n", ptr);
// prt: 0x557f95476060 

   printf("prt_i: %p \n", ptr_i);
// prt_i: (nil) 

   printf("prt_c: %p \n", ptr_c);
// prt_c: 0x557f95476060 

   return (0);

}
