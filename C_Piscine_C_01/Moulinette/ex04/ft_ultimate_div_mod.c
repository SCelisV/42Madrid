/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:35:43 by scelis            #+#    #+#             */
/*   Updated: 2022/08/25 17:36:57 by scelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxa;
	int	auxb;

	auxa = *a;
	auxb = *b;
	*a = auxa / auxb;
	*b = auxa % auxb;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d \n", a, b);
	return (0);
}
*/
