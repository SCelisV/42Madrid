/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:43:11 by scelis            #+#    #+#             */
/*   Updated: 2022/08/17 19:45:25 by scelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = 48;
	while (num >= 48 && num <= 57)
	{
		write(1, &num, 1);
		++num;
	}
}