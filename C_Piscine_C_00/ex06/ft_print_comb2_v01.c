#include<stdio.h>
#include<unistd.h>

void ft_print_comb2( void )
{
	int n[2];
	
	n[0] = 0;

	while(n[0] <= 28)
	{
		if ( n[0] < 10 )
		{
			printf("%d, ", n[0]);

		}
		else
		{ 
			printf("%d, ", n[0]);
			//write(1, &n[0], 1);
		}
			n[0]++;
	}
}
