#include<stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{

    int     a;
    int     b;

    a = 42;
    b = 24;

    int     *ptra;
    int     *ptrb;

    ptra = &a;
    ptrb = &b;

    printf ("main a: %d \n", a);
    printf ("main b: %d \n", b);
    printf ("main ptra: %p \n", ptra);
    printf ("main ptrb: %p \n", ptrb);

//  main a: 42 
//  main b: 24 
//  main ptra: 0x7ffdadd00560 
//  main ptrb: 0x7ffdadd00564 


    //ft_swap(ptra, ptrb);
    ft_swap(&a, &b);

    return (0);

}

