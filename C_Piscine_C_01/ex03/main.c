#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int     a;
    int     b;
    int     *div;
    int     *mod;

    int     idiv;
    int     imod;

    a = 42;
    b = 2;
    div = &idiv;
    mod = &imod;

    printf("antes de la llamada a la función \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
    printf("&div: %p \n", div);
    printf("&mod: %p \n", mod);
// antes de la llamada a la función 
// a: 42 
// b: 2 
// &div: 0x7ffc810aee68 
// &mod: 0x7ffc810aee6c 

    ft_div_mod(a, b, div, mod);

    printf("después de la llamada a la función \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
    printf("div: %d \n", *div);
    printf("mod: %d \n", *mod);
// después de la llamada a la función 
// a: 42 
// b: 2 
// div: 21 
// mod: 0 

    ft_div_mod(42, 2, &a, &b);
    printf("después de la llamada a la función \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
    printf("div: %d \n", *div);
    printf("mod: %d \n", *mod);
    
// después de la llamada a la función 
// a: 21 
// b: 0 
// div: 21 
// mod: 0 

}