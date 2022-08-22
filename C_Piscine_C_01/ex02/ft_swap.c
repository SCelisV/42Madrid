#include<stdio.h>
/*
Escribe una función que intercambie el contenido de dos enteros cuyas direcciones se utilicen como parámetro.
*/
void ft_swap(int *a, int *b)
{

    printf ("entrando en la function a: %p \n", a);
    printf ("entrando en la function *a: %d \n", *a);
    printf ("entrando en la function b: %p \n", b);
    printf ("entrando en la function *b: %d \n", *b);

//  entrando en la function a: 0x7ffdadd00560 
//  entrando en la function *a: 42 
//  entrando en la function b: 0x7ffdadd00564 
//  entrando en la function *b: 24 

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

    printf ("saliendo de la function a: %p \n", a);
    printf ("saliendo de la function *a: %d \n", *a);
    printf ("saliendo de la function b: %p \n", b);
    printf ("saliendo de la function *b: %d \n", *b);

//  saliendo de la function a: 0x7ffdadd00560 
//  saliendo de la function *a: 24 
//  saliendo de la function b: 0x7ffdadd00564 
//  saliendo de la function *b: 42 

}