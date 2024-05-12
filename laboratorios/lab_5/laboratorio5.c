# include <stdio.h>
# include <string.h>

/* ALEJANDRO GARCIA C03187
Este programa imprime piramides de un mismo caracter.
El usuario elige el tamano, el caracter, y si la misma es normal o invertida.
Se repite todas las veces que el usuario desee, hasta que se ingrese "SALIR". 
*/

// Inicializacion de funciones
void caracter_multiple(int,char);
void piramide_regular(int, char);
void piramide_invertida(int, char);

int main(){
    // Se inicializa la variable que se va a comparar con 'Salir', se le da tamano arbitrario
    char verificarSalir[10];

    do{
        // Pedir datos al usuario
        int tipo, tam;
        char caracter;
        
        printf("Digite el tipo de piramide: ");
        scanf("%d", &tipo);
        getchar(); // Este gerchar 'absorbe' el caracter de nueva linea al teclear 'enter'

        printf("Digite el tamano de la piramide: ");
        scanf("%d", &tam);
        getchar();
    
        printf("Digite el caracter para la piramide: ");
        scanf("%c", &caracter);
        getchar();


        // Crear piramide
        if(tipo == 1){
            piramide_regular(tam,caracter);
        }
        else if(tipo == 2){
            piramide_invertida(tam,caracter);
        }
        else{
            printf("Digitar 1 para piramide normal, 2 para piramide invertida.");
        }

        printf("Escriba SALIR para terminar el programa. Presione cualquier tecla para hacer otra piramide.\n");
        scanf("%s", verificarSalir);


    } while(strcmp(verificarSalir, "SALIR") != 0);
    // strcmp compara el largo de ambas cadenas; retorna 0 si son iguales.    
    
    return 0;
}

void caracter_multiple(int n, char letra){
    // Imprime n veces, en una sola linea, el caracter 'letra'
    for(int i = 1; i <= n; i++){
        printf("%c",letra);
    }
}

void piramide_regular(int tam, char caracter){
/* Cada iteracion del 'for' imprime un linea de la piramide. 
"i" indica la cantidad de caracteres a imprimir, aumenta de 2 en 2.
Para centrar la piramide, se imprimen espacios alrededor de los caracteres.
La cantidad de espacios se define en 'extra'.
Si el tamano es par, la punta de la piramide es de dos caracteres,
si es impar, la punta es de un caracter, por eso el if. 
*/
    if(tam % 2 == 0){
        for(int i = 0; i <= tam; i+= 2){
            int extra = (tam - i) / 2;

            caracter_multiple(extra, ' ');
            caracter_multiple(i, caracter);
            caracter_multiple(extra, ' ');
            printf("\n");
        }
    }
    else{
        for(int i = 1; i <= tam; i+= 2){
            int extra = (tam - i) / 2;

            caracter_multiple(extra, ' ');
            caracter_multiple(i, caracter);
            caracter_multiple(extra, ' ');
            printf("\n"); 
        }
    }
}

void piramide_invertida(int tam, char caracter){
/*Igual a la funcion anterior, pero "i" decrece.*/

    if(tam % 2 == 0){
        for(int i = tam; i >= 0; i-= 2){
            int extra = (tam - i) / 2;

            caracter_multiple(extra, ' ');
            caracter_multiple(i, caracter);
            caracter_multiple(extra, ' ');
            printf("\n");
        }
    }
    else{
        for(int i = tam; i >= 1; i-= 2){
            int extra = (tam - i) / 2;

            caracter_multiple(extra, ' ');
            caracter_multiple(i, caracter);
            caracter_multiple(extra, ' ');
            printf("\n");
        }
    }
}