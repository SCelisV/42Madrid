#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   int     b;
   int     a;
   int     *ptr;

   b = 23;
   ptr = &a;

   printf("ptr es la dirección de a: %p \n", ptr);    
// ptr es la dirección de a: 0x7ffd14fde0ac 

   printf("&b es la dirección de b: %p \n", &b);
// &b es la dirección de b: 0x7ffd14fde0a8 

   printf("ptr + 1 es la dirección de a + 1: %p \n", ptr + 1);    
// ptr + 1 es la dirección de a + 1: 0x7ffd14fde0b0 
   
   // que hay en la dirección de ptr + 1
   printf("*(ptr + 1) el contenido de la dirección de a + 1 : %d \n", *(ptr + 1));    
// *(ptr + 1) el contenido de la dirección de a + 1 : 352182444 






   return (0);

}
