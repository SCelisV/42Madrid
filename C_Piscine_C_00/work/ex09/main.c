#include<stdio.h>

int main(void)
				// ojo esto no lo he reproducido
				// segmentation full

{
	int i;
	int tab[1];

	i = 42;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 1;
	tab[4] = 1;
	tab[5] = 1;
	tab[6] = 1;
	tab[7] = 1;
	tab[8] = 1;
	tab[9] = 1;
	tab[10] = 1; 		
	printf("%d \n", tab[i]);		

	return(0);
}
