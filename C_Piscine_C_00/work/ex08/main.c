#include<stdio.h>

int main(void)
{
	int a[10][10];			// 10*10    hasta n dimensiones
	int b;

	b = 3;

	a[9][7] = 3;
	a[0][a[9][7]] = 12;
	a[0][b] = 12;
	a[5][0] = 5;
	a[3][b] = a[0][b];
	//a[10] = 10; 			// *** stack smashing detected ***: terminated
							// Aborted (core dumped)


	for (int r=0; r < 10 ; r++)
	{
		for(int c=0; c < 10; c++)
		{
			printf("%d %d %d \n", r, c, a[r][c]);
		}

	}

	return(0);
}
