void	ft_putchar(char c);

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
