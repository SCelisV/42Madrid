#include<stdio.h>

// Aritmetica de punteros

int     main(void)
{

   int     b;
   int     a;
   int     *ptr;

   b = 23;
   a = 12;

   ptr = &a;

   printf("ptr es la dirección de a: %p \n", ptr);    
// ptr es la dirección de a: 0x7ffe6a8a962c 

   printf("&b es la dirección de b: %p \n", &b);
// &b es la dirección de b: 0x7ffe6a8a9628 

   // menos el tamaño de la variable a la que apunto
   printf("ptr - 1 es la dirección de a - 1: %p \n", ptr - 1);    
// ptr - 1 es la dirección de a - 1: 0x7ffe6a8a9628 
   
   // que hay en la dirección de ptr - 1
   printf("*(ptr - 1) el contenido de la dirección de a - 1 : %d \n", *(ptr - 1));    
// *(ptr - 1) el contenido de la dirección de a - 1 : 23 

   *(ptr-1) = 78;

   printf("*(ptr - 1) el contenido de la dirección de a - 1 : %d \n", *(ptr - 1));    
// *(ptr - 1) el contenido de la dirección de a - 1 : 78 

   printf("a: %d \n", a);
// a: 12 



   return (0);

}
