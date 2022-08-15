#include<stdio.h>

int main(void)
{
	int a[10];

	a[0] = 0;
	a[5] = 5;
	a[9] = 9;
	//a[10] = 10; 			// *** stack smashing detected ***: terminated
					// Aborted (core dumped)


	for (int i=0; i < 10 ; i++)
	{
		printf("%d %d \n", i, a[i]);
	}

	return(0);
}
