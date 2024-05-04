# include <stdio.h>

// Funciones bit a bit
int bitwise_and(int a, int b){
    int resultado = a & b;
    return resultado;
}

int bitwise_or(int a, int b){
    int resultado = a | b;
    return resultado;
}

int bitwise_xor(int a, int b){
    int resultado = a ^ b;
    return resultado;
}

int bitwise_not(int a){
   unsigned int resultado = ~a;
    return resultado;
}

// Funcion que imprime la representacion binaria de numero decimal
void print_binary(int decimal){
    
    // int i=(1- num bits a desplegar). Para efectos de este programa se imprimen 4 bits
    for (int i = 3; i >= 0; i--) {

        // Se leen los digitos del numero de izquierda a derecha, por medio de la traslacion
        int digito = decimal >> i; 

        // Se imprime si el digito es 1 o 0. Se va construyendo el numero en binario
        if (digito & 1)
              printf("1");
        else printf("0");
    }
    printf("\n");
}