#include<stdio.h>
/*
Escribe una función que invierta un array de int (el primer elemento va el último, etc).
Los parámetros son un puntero a int y el número de int en el array.
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	aux = 0;
	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = aux;
		printf("tabfunc[%d]:%d \n" , i, tab[i]);
		i++;
	}
}
