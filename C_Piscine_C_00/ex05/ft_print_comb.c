#include<unistd.h>

void ft_print_comb( void )
{
	char c;
	char c1;
	char c2;
	
	c = '0';

	while(c <= '7')
	{
		c1 = c + 1;
		while(c1 <= '8')
		{
			c2 = c1 + 1;
			while(c2<= '9')
			{
				write(1, &c, 1);
				write(1, &c1, 1);
				write(1, &c2, 1);
				if (!(c == '7' && c1 == '8' && c2 == '9'))
					write(1, &", ", 2);
				c2++;
			}
			c1++;
		}
	c++;
	}
}
