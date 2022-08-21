#include<stdio.h>

int     main(void)
{

   int     n;
   int     *ptr;
   int     **ptr2;
   int     ***ptr3;
   int     ****ptr4;
   int     *****ptr5;
   int     ******ptr6;

   n = 42;

   ptr = &n;
   ptr2 = &ptr;
   ptr3 = &ptr2;
   ptr4 = &ptr3;
   ptr5 = &ptr4;
   ptr6 = &ptr5;

   printf("%d \n", n);    
// 42 
   printf("ptr: %d \n", ptr);    
// ptr: -853188204 
   printf("*ptr: %d \n", *ptr);    
// *ptr: 42 
   printf("*ptr2: %d \n", *ptr2);    
// *ptr2: -853188204 
   printf("**ptr2: %d \n", **ptr2);    
// **ptr2: 42 
   printf("*ptr3: %d \n", *ptr3);    
// *ptr3: -853188200 
   printf("***ptr3: %d \n", ***ptr3);    
// ***ptr3: 42 
   printf("*ptr4: %d \n", *ptr4);    
// *ptr4: -853188192 
   printf("****ptr4: %d \n", ****ptr4);    
// ****ptr4: 42 
   printf("*ptr5: %d \n", *ptr5);    
// *ptr5: -853188184 
   printf("*****ptr5: %d \n", *****ptr5);    
// *****ptr5: 42 
   printf("*ptr6: %d \n", *ptr6);    
// *ptr6: -853188176 
   printf("******ptr6: %d \n", ******ptr6);    
// ******ptr6: 42 


   return (0);
}
