#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	i = 0;
	size = 10;void ft_sort_int_tab(int *tab, int size);

	tab[0] = 0;
	tab[1] = 5;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 4;
	tab[5] = 6;
	tab[6] = 9;
	tab[7] = 8;
	tab[8] = 7;
	tab[9] = 1;
	while (i < size)
	{
		printf("tab[%d]: %d \n", i, tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d]: %d \n", i, tab[i]);
		i++;
	}
	return(0);
}
