/*
Esta función divide los int apuntados por a y b.
El resultado de la división se almacena en el int apuntado por a.
El resultado del resto de la división se almacena en el int apuntado por b
*/
void ft_ultimate_div_mod(int *a, int *b){

    int     auxa;
    int     auxb;

    auxa = *a;
    auxb = *b;

    *a = auxa / auxb;

    *b = auxa % auxb;

}