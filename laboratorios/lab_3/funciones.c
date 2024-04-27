#include <stdio.h>
#include <math.h>

// En este programa se presenta el codigo de las funciones de la calculadora
// Todas reciben solamente numeros enteros


// El funcionamiento de las primeras tres funciones (suma, resta, multipicacion) es trivial
void suma(int a, int b){
	int resultado = a + b;
	printf("El resultado de la suma es %d\n", resultado);
	
}

void resta(int a, int b){
	int resultado = a - b;
	printf("El resultado de la resta es %d\n", resultado);
}

void mult(int a, int b){
	int resultado = a * b;
	printf("El resultado de la multiplicacion es %d\n", resultado);
}

// Para la division, el numerador primero se convierte a tipo 'float'
// De lo contrario, el programa redondearia el resultado al entero mas cercano
void div(int a, int b){
	float resultado = (float) a / b;
	printf("El resultado de la division es %.3f\n", resultado);
}

// Se revisan las cuatro combinaciones posibles de paridad (par-par, par-impar, impar-par, impar-impar)
// utilizando el operador de modulo
void paridad(int a, int b){
	if(a % 2 == 0){
		if(b % 2 == 0){
			printf("El numero %d es par, y el numero %d es par\n", a, b);		
		}else {
			printf("El numero %d es par, y el numero %d es impar\n", a, b);	
		}	   
	} 
	if(b % 2 == 0){
		if(b % 2 == 0){
			printf("El numero %d es impar, y el numero %d es par\n", a, b);		
		}else {
			printf("El numero %d es impar, y el numero %d es impar\n", a, b);	
		}	   
	}

}

void modulo(int a, int b){
	int resultado = a % b;
	printf("El resultado del modulo es %d\n", resultado);
}

// Se utiliza un for, que multiplica 'a' por si mismo 'b' veces
void potencia(int a, int b){
	int resultado = 1;
	
	for(int i=0; i<b; i++){
		resultado *= a;
	}
	printf("El resultado de la potencia es %d\n", resultado);
}
