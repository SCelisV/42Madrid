/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:35:21 by scelis            #+#    #+#             */
/*   Updated: 2022/08/23 20:58:51 by scelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	*ptr;
	int	b;
	int	*ptr2;

	a = 42;
	b = 24;
	ptr = &a;
	ptr2 = &b;
	ft_swap(ptr, ptr2);
	return (0);
}

