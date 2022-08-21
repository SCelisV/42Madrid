// una utilización común de los punteros es que nos permite en una función modificar una variable que viene de otra función (que estaba en la pila)
// aquí no actualizamos la variable a del main:

#include<stdio.h>
void  fct(int a);


// esta función coge el argumento a 
void  fct(int a)
{
   // la copia de a va a tomar el valor de 42
   a = a + 42;
   // la copia de a va a tomar el valor de 84

   printf("a en fct: %d \n", a);
// a en fct: 84 
}


int     main(void)
{

   // define un puntero a
   int   a;
   // asigna 42 al puntero
   a = 42;

   printf("a en main antes de llamar a fct: %d \n", a);
// a en main antes de llamar a fct: 42 

   // llamar a fct pasandole una copia del valor de a
   fct(a);
   printf("a en main después de llamar a fct: %d \n", a);
// a en main después de llamar a fct: 42 

   return (0);

}