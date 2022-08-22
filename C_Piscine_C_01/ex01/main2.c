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

	nbr = 42;
	ptr = &nbr;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf("nbr: %d \n", nbr);
	printf("ptr: %p \n", ptr);
	printf("ptr2: %p \n", ptr2);
   	printf("ptr3: %p \n", ptr3);
   	printf("ptr4: %p \n", ptr4);
   	printf("ptr5: %p \n", ptr5);
   	printf("ptr6: %p \n", ptr6);
   	printf("ptr7: %p \n", ptr7);
   	printf("ptr8: %p \n", ptr8);
   	printf("ptr9: %p \n", ptr9);

/*
nbr: 42 
ptr: 0x7ffc0ab1317c 
ptr2: 0x7ffc0ab13180 
ptr3: 0x7ffc0ab13188 
ptr4: 0x7ffc0ab13190 
ptr5: 0x7ffc0ab13198 
ptr6: 0x7ffc0ab131a0 
ptr7: 0x7ffc0ab131a8 
ptr8: 0x7ffc0ab131b0 
ptr9: 0x7ffc0ab131b8 
*/

	printf("*ptr: %d \n", *ptr);
	printf("**ptr2: %d \n", **ptr2);
   	printf("***ptr3: %d \n", ***ptr3);
   	printf("****ptr4: %d \n", ****ptr4);
   	printf("*****ptr5: %d \n", *****ptr5);
   	printf("******ptr6: %d \n", ******ptr6);
   	printf("*******ptr7: %d \n", *******ptr7);
   	printf("********ptr8: %d \n", ********ptr8);
   	printf("*********ptr9: %d \n", *********ptr9);

/*
*ptr: 42 
**ptr2: 42 
***ptr3: 42 
****ptr4: 42 
*****ptr5: 42 
******ptr6: 42 
*******ptr7: 42 
********ptr8: 42 
*********ptr9: 42 
*/

	printf("ptr: %p \n", ptr);
	printf("*ptr2: %p \n", *ptr2);
   	printf("**ptr3: %p \n", **ptr3);
   	printf("***ptr4: %p \n", ***ptr4);
   	printf("****ptr5: %p \n", ****ptr5);
   	printf("*****ptr6: %p \n", *****ptr6);
   	printf("******ptr7: %p \n", ******ptr7);
   	printf("*******ptr8: %p \n", *******ptr8);
   	printf("********ptr9: %p \n", ********ptr9);

/*
ptr: 0x7ffc0ab1317c 
*ptr2: 0x7ffc0ab1317c 
**ptr3: 0x7ffc0ab1317c 
***ptr4: 0x7ffc0ab1317c 
****ptr5: 0x7ffc0ab1317c 
*****ptr6: 0x7ffc0ab1317c 
******ptr7: 0x7ffc0ab1317c 
*******ptr8: 0x7ffc0ab1317c 
********ptr9: 0x7ffc0ab1317c 
*/

	return(0);

}
