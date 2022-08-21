#include<stdio.h>

// Declaración y asignación de un pointer
// Un puntero posee una dirección de memoria
// En general todas las direcciones son un número
// El compilador debe saber que tipo de variable hay almacenada en esa dirección

int     main(void)
{

    int n;
    
    // Declaración de un puntero a un int - entero
    int *ptr;

    // recuperar la dirección de un entero, 
    // se hace una copia de la variable y se recupera la dirección de esta
    ptr = &n;

    printf ("esta es la dirección de la variable entera n: %p \n", ptr); 
    //esta es la dirección de la variable entera n: 0x7ffcdf4e75ec 

    return (0);
}