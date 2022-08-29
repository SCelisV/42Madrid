#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
        while (src[i] != '\0')
	{
		dest[i] = src[i];
		printf("dest[%d], %d: \n", i, dest[i]); 
		printf("src[%d], %d: \n", i, src[i]); 
                i++;
        }
	dest[i] = '\0';

	return(dest);
}
