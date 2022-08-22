#include<stdio.h>
/*
Escribe una función que reciba como parámetro un puntero a un puntero a un
puntero a un puntero un puntero a un puntero a un puntero a un puntero a un
puntero a un int y dé al int el valor 42.
*/
void    ft_ultimate_ft(int *********nbr)
{
    printf ("*********nbr en la in de la función: %p \n", nbr);
    // le asigno un valor al puntero que recibo como parametro 
    *********nbr = 42;
    printf ("*********nbr en la out de la función: %p \n", nbr);

}