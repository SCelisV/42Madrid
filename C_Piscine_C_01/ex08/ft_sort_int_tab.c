#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				printf("tabi[%d]: %d \n", i, tab[i]);
				printf("tabj[%d]: %d \n", j, tab[j+1]);
				aux = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}

}
