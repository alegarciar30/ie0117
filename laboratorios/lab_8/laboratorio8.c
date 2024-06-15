# include <stdio.h>

// ENCABEZADO

struct datos_persona{
    char nombre[21];
    char apellido[21];
    int telefono;
    char carnet[8];
    char enfasis[41];
};



void set_struct(struct datos_persona* ptr){

    // Permite al usuario ingresar los datos del struct

    printf("Ingrese nombre: ");
    scanf("%20s", ptr->nombre);

    printf("Ingrese apellido: ");
    scanf("%20s", ptr->apellido);

    printf("Ingrese numero de telefono: ");
    scanf("%d", &ptr->telefono);

    printf("Ingrese carnet: ");
    scanf("%7s", ptr->carnet);

    printf("Ingrese enfasis: ");
    scanf("%40s", ptr->enfasis);

   
}

void print_struct(struct datos_persona* ptr){
    // Imprime los datos guardados en el struct

    printf("Nombre: %s\n",ptr->nombre);
    printf("Apellido: %s\n",ptr->apellido);
    printf("Telefono: %d\n", ptr->telefono);
    printf("Carnet: %s\n",ptr->carnet);
    printf("Enfasis: %s\n",ptr->enfasis);
}

int main(){

    // Array de 5 structs
    struct datos_persona lista[5];

    // Primero se ingresan los datos de los cinco structs
    printf("Ingreso de datos:\n");
    for(int i = 0; i < 5; i++){
        set_struct(&lista[i]);
        printf("----------------------\n");
    }

    // Luego se imprimen
    printf("Se imprmen de vuelta los datos:\n");
    for(int i = 0; i < 5; i++){
        print_struct(&lista[i]);
        printf("----------------------\n");
    }


    return 0;
}