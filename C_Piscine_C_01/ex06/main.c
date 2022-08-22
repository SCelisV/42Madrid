#include<stdio.h>
int ft_strlen(char *str);

int main(void)
{
    int a;
    char *str;
    str = "esta es una cadena de caracteres";
    a = ft_strlen(str);
    printf("a: %d \n", a); 

    return(0);
}