#include<stdio.h>

void    ft_ft(int *nbr);

int main(void)
{
    // defino un entero
    int   nbr;

    // inicializar la variable
    nbr = 0;
    printf("nbr en main antes de llamar a ft_ft: %d \n", nbr);
//  nbr en main antes de llamar a ft_ft: 0 

    // llamar a ft_ft pasandole la dirección del entero nbr
    ft_ft(&nbr);

    printf("nbr en main después de llamar a ft_ft: %d \n", nbr);
//  nbr en main después de llamar a ft_ft: 42 

    return (0);
}
