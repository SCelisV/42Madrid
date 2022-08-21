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

// No nos da warning porque el compilador sabe que void* es una dirección
   ptr = ptr_i;

   printf("prt: %p \n", ptr);
// prt: 0x563e53eca060 

   printf("prt_i: %p \n", ptr_i);
// prt_i: 0x563e53eca060 

   printf("prt_c: %p \n", ptr_c);
// prt_c: (nil) 


   return (0);

}