// una utilización común de los punteros es que nos permite en una función modificar una variable que viene de otra función (que estaba en la pila)
// pasando su dirección como parámetro
// aquí si que podemos actualizar la variable a del main:

#include<stdio.h>
void  fct(int *a);



// recibo la dirección de a en un puntero
void  fct(int *a)
{
   *a = *a + 42;

   printf("*a en fct: %d \n", *a);
// *a en fct: 84 

}


int     main(void)
{

   // define un puntero a
   int   a;
   // asigna 42 al puntero
   a = 42;

   printf("a en main antes de llamar a fct: %d \n", a);
// a en main antes de llamar a fct: 42 

   // llamar a fct pasandole la copia de la dirección de a
   fct(&a);

   printf("a en main después de llamar a fct: %d \n", a);
// a en main después de llamar a fct: 84 

   return (0);



}