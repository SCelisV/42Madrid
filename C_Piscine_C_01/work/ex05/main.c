#include<stdio.h>

// Un puntero posee la dirección de una variable
// Queremos saber que hay en esa dirección
// Modificar la variable que hay en ella

int     main(void)
{

   int     n;
   int      *ptr;

   n = 42;
   ptr = &n;

   printf("%d \n", n);    
   // 42 
   printf("%d \n", ptr);    
   // 935672476 
   printf("%d \n", *ptr);    
   // 42 

   // Se puede modificar el valor de la variable:
   * ptr = 84;
   printf("%d \n", n);    
   // 84


   return (0);
}
