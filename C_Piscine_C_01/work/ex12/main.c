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
// ptr es la dirección de a: 0x7ffddf6961bc 

   printf("&b es la dirección de b: %p \n", &b);
// &b es la dirección de b: 0x7ffddf6961b8 

// mas el tamaño de la variable a la que apunto
   printf("ptr + 1 es la dirección de a + 1: %p \n", ptr + 1);    
// ptr + 1 es la dirección de a + 1: 0x7ffddf6961c0 
   
   // que hay en la dirección de ptr + 1
   printf("*(ptr + 1) el contenido de la dirección de a + 1 : %d \n", *(ptr + 1));    
// *(ptr + 1) el contenido de la dirección de a + 1 : -546741828 

   *(ptr+1) = 78;
// Segmentation fault (core dumped)  ---- OJO... 

   printf("*(ptr + 1) el contenido de la dirección de a + 1 : %d \n", *(ptr + 1));    

   printf("b: %d \n", b);




   return (0);

}
