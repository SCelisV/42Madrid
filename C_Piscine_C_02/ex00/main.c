#include<stdio.h>
#include<unistd.h>
#include<string.h>

/*
Reproduce el comportamiento de la función strcpy (man strcpy)
strcpy copia la cadena apuntada por src, incluyendo el byte ('\0') al buffer apuntado por dest.
Las cadenas no pueden superponerse, y la cadena de destino dest debe ser lo suficientemente grande como para recibir la copia. 
devuelve un puntero a la cadena de destino dest.
en este ejemplo lo que se está recuperando es el puntero que contiene el valor ascii del caracter
	72:H, 111:o, 108:l,  97:a,  32: 112:p, 105:i, 115:s, 99:c, 105:i, 110:n, 97:a, 32: 52:4, 50:2
*/

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{

	char 	dest[15];
	int	i;

	printf("dest: %s \n", dest);

	ft_strcpy(dest, "Hola piscina 42");
	i = 0;
	while (dest[i] != '\0')
	{
		write(1,&dest[i],1); 
		i++;
	}

	printf("\n");
	printf("dest: %s \n", dest);
	return (0);
}
