#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   char     c;
   char     *ptr;

   c = 'a';
   ptr = &c;

   printf("%c \n", c);    
// a 
   printf("ptr: %p \n", ptr);    
// ptr: 0x7ffc1d207b3f 

   printf("ptr + 1: %p \n", ptr + 1);    
// Esto es porque ptr es un puntero sobre char int (que ocupa 1 bytes) me he desplazado 1 bytes
// ptr + 1: 0x7ffc1d207b40 

   printf("ptr + 2: %p \n", ptr + 2);    
// Esto es porque ptr es un puntero sobre char (que ocupa 1 bytes) me he desplazado 2 bytes
// ptr + 2: 0x7ffc1d207b41 

   printf("ptr + 3: %p \n", ptr + 3);    
// Esto es porque ptr es un puntero sobre char (que ocupa 1 bytes) me he desplazado 3 bytes
// ptr + 3: 0x7ffc1d207b42 

   return (0);

}
