#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   char     *c;
   char     **ptr;

   ptr = &c;

   printf("%s \n", c);    
// ��1�I��^H��H���PTL� 

   printf("ptr: %p \n", ptr);    
// ptr: 0x7ffe33e080e8 

   printf("ptr + 1: %p \n", ptr + 1);    
// Esto es porque ptr es un puntero de un puntero, me he desplazado 2 bytes
// ptr + 1: 0x7ffe33e080f0 

   printf("ptr + 2: %p \n", ptr + 2);    
// Esto es porque ptr es un puntero de un puntero, me he desplazado 2 bytes
// ptr + 2: 0x7ffe33e080f8 

   printf("ptr + 3: %p \n", ptr + 3);    
// Esto es porque ptr es un puntero de un puntero, me he desplazado 2 bytes
// ptr + 3: 0x7ffe33e08100 

   return (0);

}
