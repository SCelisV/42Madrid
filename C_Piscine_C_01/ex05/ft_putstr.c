#include<stdio.h>
#include<unistd.h>
/*
Escribe una función que muestre uno a uno en la pantalla los caracteres de un string.
La dirección del primer carácter del string está incluida en el puntero utilizado como parámetro para a la función.
*/

void ft_putstr(char *str){

    printf("En la función \n");
    printf("*str: %c \n", *str);

//  En la función 
//  *str: e 

    while( *str != '\0'){

        // printf("*str: %c \n", *str);

        write(1, &*str, 1);
        str++ ;

    }


}