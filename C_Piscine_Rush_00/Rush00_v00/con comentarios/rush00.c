/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:05:24 by fsanz-ex          #+#    #+#             */
/*   Updated: 2022/08/13 10:56:11 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_tipo_caracter(int c, int r, int x, int y);

void	rush00(int x, int y)
{
	int	c;			//columnas
	int	r;			//filas
	r = 1;						//recorremos filas
	while (r <= y)
	{
		c = 1;
		while (c <= x)			//recorremos columnas
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
	if ((c == 1 && r == 1) || ((c == x && r == y) && r != 1 && c != 1))		// comprobamos si es la 1,1 o col,fila
		ft_putchar('/');
	else if ((r == 1 && c == x) || (c == 1 && r == y))	// comprobamos si es 1,fila 0 col,1
		ft_putchar('\\');
	else if (((r == 1 || r == y) && (c > 1 && c < x)) || ((c == 1 || c == x) && (r > 1 && r < y)))	// comprobamos si es borde 
		ft_putchar('*');
	//else if ((c == 1 || c == x) && (r > 1 && r < y))	// comprobamos si es borde derecho o izquierdo
	//	ft_putchar('*');
	else													// el resto lo rellenamos con espacios
		ft_putchar(' ');
}

