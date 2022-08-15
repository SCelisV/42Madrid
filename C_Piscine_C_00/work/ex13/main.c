#include<stdio.h>

int main(void)
{
					//	++ y -- permiten incrementar y decrementar directamente una variable 

	int a;
	int b;

	a = 43;
	b = 32;
	printf("%d == %d %d \n", a, b, a == b);			//	43 == 32 0 

	a = 43;
	b = 43;
	printf("%d == %d %d \n", a, b, a == b);			//	43 == 43 1 

	a = 43;
	b = 43;
	printf("%d != %d %d \n", a, b, a != b);			//	43 != 43 0 	

	a = 43;
	b = 32;
	printf("%d != %d %d \n", a, b, a != b);			//	43 != 32 1

	a = 43;
	b = 43;
	printf("%d > %d %d \n", a, b, a > b);			//	43 > 43 0

	a = 43;
	b = 43;
	printf("%d >= %d %d \n", a, b, a >= b);			//	43 >= 43 1 

	a = 43;
	b = 43;
	printf("%d < %d %d \n", a, b, a < b);			//	43 < 43 0 

	a = 43;
	b = 43;
	printf("%d <= %d %d \n", a, b, a <= b);			//	43 <= 43 1 

	a = 43;
	printf("!%d %d \n", a, !a );				//	!43 0

	a = 0;
	printf("!%d %d \n", a, !a );				//	!0 1

	a = 43;
	b = 43;
	printf("!(%d <= %d) %d \n", a, b, !(a <= b));		//	!(43 <= 43) 0

	a = 43;
	b = 43;
	printf("!!(%d <= %d) %d \n", a, b, !!(a <= b));		//	!!(43 <= 43) 1 

	a = 43;
	b = 43;
	printf("%d && %d %d \n", a, b, a && b);			//	43 && 43 1 

	a = 43;
	b = 0;
	printf("%d && %d %d \n", a, b, a && b);			//	43 && 0 0 

	a = 43;
	b = 0;
	printf("%d || %d %d \n", a, b, a || b);			//	43 || 0 1 

	a = 0;
	b = 0;
	printf("%d || %d %d \n", a, b, a || b);			//	0 || 0 0 

	a = 2;
	b = 4;
	printf("%d \n", (a == b) && (a != b)); 			//	0 || 0 0 






	return(0);
}
