#include<stdio.h>

// Declaración y asignación de un pointer
// Un puntero posee una dirección de memoria
// En general todas las direcciones son un número
// El compilador debe saber que tipo de variable hay almacenada en esa dirección
// La variable virtual hace que el valor de la variable cambia cada vez que lanzamos el programa

int     main(void)
{

    int n;
    int n2;
    
    // Declaración de un puntero a un int - entero
    int *ptr;
    // recuperar la dirección de un entero, 
    // se hace una copia de la variable y se recupera la dirección de esta
    ptr = &n;
    printf ("esta es la dirección de la variable entera n: %p \n", ptr); 
    // esta es la dirección de la variable entera n: 0x7ffe7cd96488 

    ptr = &n2;
    printf ("esta es la dirección de la variable entera n2: %p \n", ptr); 
    // esta es la dirección de la variable entera n2: 0x7ffe7cd9648c 
    return (0);
}