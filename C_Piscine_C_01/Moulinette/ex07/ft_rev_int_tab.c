/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:04:57 by scelis            #+#    #+#             */
/*   Updated: 2022/08/25 17:48:51 by scelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

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

int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	size = 10;
	i = 0;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d]:%d \n" , i, tab[i]);
		i++;
	}
	printf("%p, %d\n", tab, size);
	return (0);
}