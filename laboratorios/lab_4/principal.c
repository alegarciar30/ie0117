# include <stdio.h>
#include "cabecera.h"

/*
Alejandro Garcia Rucavado - C03187
Este programa implementa las funciones bit a bit and, or, xor, y not.
Ademas, se implementa una funcion que imprime la representacion binaria de un numero decimal.
En main se encuentran las pruebas de las funciones, usando los dos ultimos digitos de mi carnet.
*/

// Funcion principal
int main(){
    // A partir del carnet C03187
    unsigned char a = 8;
    unsigned int b = 7;

    // Se imprime la representacion binaria de 8 y 7, para ilustrar mejor
    // el efecto de las funciones.
    print_binary(a);
    print_binary(b);
    printf("------------\n");

    int resultado_and = bitwise_and(a,b);
    print_binary(resultado_and);

    int resultado_or = bitwise_or(a,b);
    print_binary(resultado_or);

    int resultado_xor = bitwise_xor(a,b);
    print_binary(resultado_xor);

    int resultado_nota = bitwise_not(a);
    print_binary(resultado_nota);

    int resultado_notb = bitwise_not(b);
    print_binary(resultado_notb);


    return 0;
}

