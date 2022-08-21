#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   int     n2;
   int     n;
   int     *ptr;

   ptr = &n;


   printf("&n2 %p \n", &n2);    
// &n2 0x7ffc856e2158 

   printf("ptr: %p \n", ptr);    
// ptr: 0x7ffc856e215c 

   printf("ptr + 1: %p \n", ptr + 1);    
// ptr + 1: 0x7ffc856e2160 

   printf("ptr + 2: %p \n", ptr + 2);    
// ptr + 2: 0x7ffc856e2164 

   printf("ptr + 3: %p \n", ptr + 3);    
// ptr + 3: 0x7ffc856e2168 

   return (0);

}
