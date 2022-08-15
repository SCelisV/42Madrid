#include <stdio.h>

int main()
{
	char	c;						// signed desde -128 a 127 (1 octeto = 8bits = 1byte)
								// unsigned 0 a 255

	c = 'k';
	printf("lu: %lu %d %c\n", sizeof(c), c, c);		// lu: 1 107 k 
								// 1 => es el tamaño de un caracter 
								// 107 => es el valor de 'k' en la tabla ascii 
								// k => es el caracter

	c = '\n';
	printf("lu: %lu %d %c\n", sizeof(c), c, c);		// lu: 1 10 y un salto de línea


	int	i;						// 4 octetos 8*4 = 32 bits -1 para el signo 
								// signed, unsigned, long, short

	i = 120;						
	printf("lu: %lu %d %c\n", sizeof(i), i, i);		// lu: 4 120 x
								// 4 => es el tamaño de un entero 
								// 120 => es el valor
								// x => es el valor al que corresponde en la tabla ascii %c para imprimirlo

	float f;						// 4 octetos 8*4 = 32 bits una parte para la cifra y otra para la potencia

	f = 12.37;						
	printf("lu: %lu %f\n", sizeof(f), f);			// lu: 4 12.370000
								// 4 => es el tamaño de un entero 
								// 12.370000 => es el valor
	f = .37;						
	printf("lu: %lu %f\n", sizeof(f), f);			// lu: 4 0.370000
								// 4 => es el tamaño de un entero 
								// 12.370000 => es el valor

	double d = 321321.222;						
	printf("lu: %lu %f\n", sizeof(d), d);			// lu: 8 321321.222000

	unsigned int ui;
	printf("lu: %lu \n", sizeof(ui));

	signed int si;
	printf("lu: %lu \n", sizeof(si));

	signed long int sli;
	printf("lu: %lu \n", sizeof(sli));

	signed long long int slli;
	printf("lu: %lu \n", sizeof(slli));
}
