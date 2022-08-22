/*
Escribe una función que cuente el número de caracteres de un string y que devuelva el número encontrado.
*/
int ft_strlen(char *str)
{

    int len;
    len = 0;

    while( *str != '\0')
    {
        len = len +1;
        str++;
    }
    return (len);


}