# include <stdio.h>
# include <stdlib.h>

/*Este programa calcula el maximo comun divisor (MCD) de dos numeros enteros.
Los numeros se ingresan como argumentos de linea de comandos.
Utiliza el metodo de Euclides.
Maneja los errores solicitados en el enunciado.
*/

int MCD(int, int);

int main(int argc, char *argv[]){

    // Se asegura que hayan dos argumentos antes de asignarlos a variables
    if(argc != 3){
        printf("Introducir exactamente dos numeros.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    // Manejo de errores
    if((a < 0) || (b < 0)){
        printf("Introducir unicamente enteros positivos.\n");
        return 1;
    }

    else if((a == 0) && (b == 0)){
        printf("Al menos uno de los numeros debe ser distinto de cero.\n");
        return 1;
    }

    // Si no hay errores, se calcula el MCD
    else {
        printf("El MCD de los numeros ingresados es %d\n", MCD(a,b));
        return 0;
    }
}

int MCD(int x, int y){
/* Calcula el MCD de dos numeros utilizando el metodo de Euclides.
Utiliza recursividad hasta llegar al caso base de y=0.
Requiere que el primer numero sea mayor al segundo (x>y);
caso contrario, vuelve a correr la funcion con los argumentos cambiados de lugar.
*/
    if (y == 0){
        return x;
    }

    else if (y > x){
        MCD(y,x);
    }

    else {
        int mod = x % y;
        MCD(y, mod);
    }
}