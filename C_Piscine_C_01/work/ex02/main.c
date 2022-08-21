#include<stdio.h>

// Declaración y asignación de un pointer
// Un puntero posee una dirección de memoria
// En general todas las direcciones son un número
// El compilador debe saber que tipo de variable hay almacenada en esa dirección
// La variable virtual hace que el valor de la variable cambia cada vez que lanzamos el programa

int     main(void)
{

    int     n;
    int     n2;
    char    c;
    
    // Declaración de un puntero a un int - entero
    int *ptr;
    // recuperar la dirección de un entero, 
    // se hace una copia de la variable y se recupera la dirección de esta
    ptr = &n;
    printf ("esta es la dirección de la variable entera n: %p \n", ptr); 
    // esta es la dirección de la variable entera n: 0x7ffc40c091f8 

    ptr = &n2;
    printf ("esta es la dirección de la variable entera n2: %p \n", ptr); 
    // esta es la dirección de la variable entera n2: 0x7ffc40c091fc 
    
    ptr = &c;
    printf ("esta es la dirección de la variable char c: %p \n", ptr); 
    // esta es la dirección de la variable char c: 0x7ffc40c091f7 

    return (0);
}


/*
Esto es porque el puntero tiene que saber a que tipo de variable esta apuntando

si compilo sin las flags
ex02/main.c: In function ‘main’:
ex02/main.c:28:9: warning: assignment to ‘int *’ from incompatible pointer type ‘char *’ [-Wincompatible-pointer-types]
   28 |     ptr = &c;
      |         ^

si compilo con todas las Wflags:
ex02/main.c:28:9: error: assignment to ‘int *’ from incompatible pointer type ‘char *’ [-Werror=incompatible-pointer-types]
   28 |     ptr = &c;
      |         ^
cc1: all warnings being treated as errors
*/