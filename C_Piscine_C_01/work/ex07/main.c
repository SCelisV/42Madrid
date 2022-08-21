#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   int     n;
   int     *ptr;

   n = 42;

   ptr = &n;

   printf("%d \n", n);    
// 42 
   printf("ptr: %p \n", ptr);    
// ptr: 0x7ffee09c349c 

   printf("ptr + 1: %p \n", ptr + 1);    
// Esto es porque ptr es un puntero sobre int (que ocupa 4 bytes)
// ptr + 1: 0x7ffee09c34a0 

   printf("ptr + 2: %p \n", ptr + 2);    
// Esto es porque ptr es un puntero sobre int (que ocupa 4 bytes)
// ptr + 2: 0x7ffee09c34a4 

   printf("ptr + 3: %p \n", ptr + 3);    
// Esto es porque ptr es un puntero sobre int (que ocupa 4 bytes)
// ptr + 3: 0x7ffee09c34a8 

   return (0);





}
