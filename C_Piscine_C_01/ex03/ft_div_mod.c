/*
Esta función divide los dos parámetros a y b y almacena el resultado en el int apuntado por div.
También almacena el resto de la división de a y b en el int apuntado por mod.
*/
void ft_div_mod(int a, int b, int *div, int *mod)
{
    int     aux;

    aux = a / b;
    *div = aux;

    aux = a % b; 
    *mod = aux;
}