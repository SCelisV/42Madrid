#include<stdio.h>

int main(void)
{
					//	función propia aff_bin(c), que permite mostrar el valor binario de un caracter

	char c;
	char c2;

	c = 12;
	aff_bin(c);			// la función aff_bin(c) muestra: 00001100

	c = 3;
	aff_bin(c);			// la función aff_bin(c) muestra: 00000011

	c = 4;
	aff_bin(c);			// la función aff_bin(c) muestra: 00000100

	c = -128;
	aff_bin(c);			// la función aff_bin(c) muestra: 10000000
 
	c = -1;
	aff_bin(c);			// la función aff_bin(c) muestra: 11111111

	c = 11;
	c2= 6;

	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	aff_bin(c2);			// la función aff_bin(c2) 	muestra: 00000110 
	printf("& \n");			// si los dos bits son 1 el resultado es 1

	aff_bin(c & c2);		// la función aff_bin(c & c2) 	muestra: 00000010

	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	aff_bin(c2);			// la función aff_bin(c2) 	muestra: 00000110 
	printf("| \n");			// o si uno de los bits es 1 el resultado es 1

	aff_bin(c | c2);		// la función aff_bin(c | c2) 	muestra: 00001111

	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	aff_bin(c2);			// la función aff_bin(c2) 	muestra: 00000110 
	printf("^ \n");			// ^ o exclusivo si sólo uno de los bits es 1 el resultado es 1

	aff_bin(c ^ c2);		// la función aff_bin(c ^ c2) 	muestra: 00001101

	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf("~ \n");			// ~ unario que invierte todos los bits uno a uno

	aff_bin(~c);			// la función aff_bin(~c) 	muestra: 11110100

	c = 0;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00000000
	printf("! \n");			// operador unario ! devuelve algo... que es diferente de 0

	aff_bin(!c);			// la función aff_bin(!c) 	muestra: 00000001

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf("<< \n");		// operador que permite desplazar bits a la izquierda, por lo tanto agrego 0(ceros) a la derecha

	aff_bin(c << 1);		// la función aff_bin(c << 1) 	muestra: 00010110

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf("<< \n");		// operador que permite desplazar bits a la izquierda, por lo tanto agrego 0(ceros) a la derecha

	aff_bin(c << 2);		// la función aff_bin(c << 2) 	muestra: 00101100

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf("<< \n");		// operador que permite desplazar bits a la izquierda, por lo tanto agrego 0(ceros) a la derecha

	aff_bin(c << 8);		// la función aff_bin(c << 8) 	muestra: 00000000

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf(">> \n");		// operador que permite desplazar bits a la derecha, por lo tanto agrego 0(ceros) a la izquierda 

	aff_bin(c >> 1);		// la función aff_bin(c >> 1) 	muestra: 00000101

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf(">> \n");		// operador que permite desplazar bits a la derecha, por lo tanto agrego 0(ceros) a la izquierda 

	aff_bin(c >> 3);		// la función aff_bin(c >> 3) 	muestra: 00000001

	c = 11;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 00001011
	printf(">> \n");		// operador que permite desplazar bits a la derecha, por lo tanto agrego 0(ceros) a la izquierda 

	aff_bin(c >> 4);		// la función aff_bin(c >> 4) 	muestra: 00000000

	c = -128;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 10000000
	printf(">> \n");		// operador que permite desplazar bits a la derecha, en este caso va a desplazar con el valor 
					// que hay más a la izquierda, si hay 1 desplaza con 1 y si hay 0 desplaza con 0.

	aff_bin(c >> 1);		// la función aff_bin(c >> 1)	muestra: 11000000

	c = -128;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 10000000
	printf(">> \n");		// operador que permite desplazar bits a la derecha, en este caso agrega unos a la izquierda

	aff_bin(c >> 4);		// la función aff_bin(c >> 4)	muestra: 11111000


	unsigned char c;		// unsigned es la manera en que vamos a leer la memoria (el último bit es como otro cualquiera)
	c = -128;
	aff_bin(c);			// la función aff_bin(c)  	muestra: 10000000
	printf(">> \n");		// operador que permite desplazar bits a la derecha, en este caso desplaza siempre con ceros

	aff_bin(c >> 1);		// la función aff_bin(c >> 1)	muestra: 01000000

	return(0);
}
