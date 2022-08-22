#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int     a;
    int     *ptr;
    int     b;
    int     *ptr2;

    a = 4200;
    b = 42;

    ptr = &a;
    ptr2 = &b;
    

    printf("Antes de la llamada a la función: \n");
    printf("a: %d \n", a);    
    printf("ptr es el puntero que tiene la dirección de a: %p \n", ptr);    
    printf("b: %d \n", b);    
    printf("ptr es el puntero que tiene la dirección de a: %p \n", ptr2);    

    ft_ultimate_div_mod(ptr, ptr2);

    printf("Después de la llamada a la función: \n");
    printf("a: %d \n", a);    
    printf("ptr es el puntero que tiene la dirección de a: %p \n", ptr);    
    printf("b: %d \n", b);    
    printf("ptr es el puntero que tiene la dirección de a: %p \n", ptr2);    

    return(0);

//  Antes de la llamada a la función: 
//  a: 4200 
//  ptr es el puntero que tiene la dirección de a: 0x7ffdbb9630f0 
//  b: 42 
//  ptr es el puntero que tiene la dirección de a: 0x7ffdbb9630f4 
//  Después de la llamada a la función: 
//  a: 100 
//  ptr es el puntero que tiene la dirección de a: 0x7ffdbb9630f0 
//  b: 0 
//  ptr es el puntero que tiene la dirección de a: 0x7ffdbb9630f4 

}




