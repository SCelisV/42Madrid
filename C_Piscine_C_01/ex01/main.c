#include<stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int		nbr;

   	int   	*ptr;
   	int   	**ptr2;
   	int   	***ptr3;
   	int   	****ptr4;
   	int   	*****ptr5;
   	int   	******ptr6;
   	int   	*******ptr7;
   	int   	********ptr8;
   	int   	*********ptr9;

	nbr = 0;

	ptr = &nbr;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf("nbr before call ft_ultimate: %d \n", nbr);
	printf("before call ft_ultimate: %p \n", ptr9);
	ft_ultimate_ft(ptr9);

	printf("ptr: %p \n", ptr);
	printf("ptr2: %p \n", ptr2);
   	printf("ptr3: %p \n", ptr3);
   	printf("ptr4: %p \n", ptr4);
   	printf("ptr5: %p \n", ptr5);
   	printf("ptr6: %p \n", ptr6);
   	printf("ptr7: %p \n", ptr7);
   	printf("ptr8: %p \n", ptr8);
   	printf("ptr9: %p \n", ptr9);

	printf("after call ft_ultimate: %d \n", nbr);

	return(0);

}
