#include<stdio.h>
/*
Escribe una función que reciba como parámetro un puntero a un int y dé al int
el valor 42.
*/
void ft_ft(int *nbr)
{

    // le asigno un valor al puntero que recibo como parametro 
    *nbr = 42;
    printf ("*nbr en la función: %d \n", *nbr);
    //  *nbr en la función: 42 

}