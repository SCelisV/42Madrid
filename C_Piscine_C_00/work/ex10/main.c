#include<stdio.h>

int main(void)
{
	int i;

	i = 47 % 12;
	printf("%d \n", i);

	i = 47 - 47 / 12 * 12;
	printf("%d \n", i);

	i = 47 - ( 47 / 12 )  * 12;
	printf("%d \n", i);

	i = 47 - 47 / ( 12  * 12 );
	printf("%d \n", i);

	printf("%d \n", i * 12);

	return(0);
}
