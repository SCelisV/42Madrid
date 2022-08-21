// un puntero con un valor 0 es un puntero null, no apunta a nada, apunta a 0 pero nunca hay nada en 0
// nos permite saber cuales estan apuntando a un elemento y cuales no apuntan a nada
// todos los que estan a 0 no tienen una dirección real a la que ir

#include<stdio.h>

int     main(void)
{

   int   *ptr;

   // asigna 0 al puntero - caso exceptional
   ptr = 0;

   printf("prt: %p \n", ptr);
   // prt: (nil) 

   return (0);

}