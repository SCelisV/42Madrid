void	ft_putchar(char c);
void 	ft_char(int x, int y, int c, int r);
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
			ft_char(x, y, c, r);
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		r++;
	}
}

void 	ft_char(int x, int y, int c, int r)
{
	if (((r == 1) && (c == 1)) || ((r == y) && (c == x) && r != 1 && c != 1 ))
		ft_putchar('/');
	else if ((c == 1 && r == y) || (r == 1 && c == x))
		ft_putchar('\\');
	else if ((r == 1 || r == y) && (c > 1 && c < x))
		ft_putchar('*');
	else if ((c == 1 || c == x) && (r > 1 && r < y))
		ft_putchar('*');
	else 
		ft_putchar(' ');
}
