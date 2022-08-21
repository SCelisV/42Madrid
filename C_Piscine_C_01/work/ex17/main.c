#include<stdio.h>

// tablas - arrays - matrices

int     main(void)
{

   // reservar 3 posiciones de memoria en el stack
   // tab "es un puntero de int", que posee la dirección del primer int
   // pero realmente no existe, en la pila se han guardado 3 int
   int   a;
   int   tab[3];

   int   *ptr;
   // asignando directamente tab al puntero
   ptr = tab;

   tab = &a;

   printf("tab: %p \n", tab);

   printf("ptr: %p \n", ptr);

   return (0);

}

// Esto da un error ya que tab "virtualmente" no existe
// es sólo un punto de referencia para saber donde esta el primer elemento de la tabla
// la tabla es un puntero sobre un tipo de elemento

/*
work/ex17/main.c:18:8: error: assignment to expression with array type
   18 |    tab = &a;
      |        ^
*/