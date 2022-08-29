#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;
	i = 0;
	while(src[i] != '\0' && i <= n) 
	{
		dest[i] = src[i];
		printf("src[%d]: %d \n", i, src[i]);
		printf("dest[%d]: %d \n", i, dest[i]);
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
