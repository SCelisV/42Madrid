/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:05:24 by fsanz-ex          #+#    #+#             */
/*   Updated: 2022/08/14 13:31:58 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_tipo_caracter(int c, int r, int x, int y);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			ft_tipo_caracter(c, r, x, y);
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		r++;
	}
}

void	ft_tipo_caracter(int c, int r, int x, int y)
{
	if ((c == 1 && r == 1) || ((c == x && r == y) && r != 1 && c != 1))
		ft_putchar('/');
	else if ((r == 1 && c == x) || (c == 1 && r == y))
		ft_putchar('\\');
	else if ((r == 1 || r == y) && (c > 1 && c < x))
		ft_putchar('*');
	else if ((c == 1 || c == x) && (r > 1 && r < y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}
