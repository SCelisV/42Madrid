#include<stdio.h>

// tablas - arrays - matrices
// Las tablas son punteros que estan virtualmente
// los punteros son una excelente herramienta para desplazarse por las tablas 
// los [] son un calculo aritmetico de punteros y una iteración

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero sobre int", que posee la dirección del primer int
   // pero realmente no existe, en la pila se han guardado 3 int
   int   tab[3];

   // *tab2 es una tabla de punteros que contiene dos elementos, es decir, es un puntero sobre un puntero de int
   int   *tab2[2];

   // ver la dirección del elemento [2] de la tabla
   tab[2] = 145;

   // asignar a la dirección del primer int de tab a la posición 1 de la tabla de punteros
   // esto es un puntero sobre int
   tab2[1] = tab;


   tab2[1][2] = 18;

   *(tab2[1] + 2) = 18;

   *(*(tab2 + 1) + 2) = 18;

   printf("tab2[1]: %p \n", tab2[1]);
// tab2[1]: 0x7ffc1613d714 

   printf("*(tab + 2): %d \n", *(tab + 2));
// *(tab + 2): 18 

   printf("*(tab2[1] + 2): %d \n", *(tab2[1] + 2));
// *(tab2[1] + 2): 18 

   printf("*(*(tab2 + 1) + 2): %d \n", *(*(tab2 + 1) + 2));
// *(*(tab2 + 1) + 2): 18 

   return (0);


}

/*
tab[1] es equivalente a *(tab + 1) 
tab[n] es equivalente a *(tab + n) 
tab2[1][2] = es equivalente a *(tab2[1] + 2)
*/