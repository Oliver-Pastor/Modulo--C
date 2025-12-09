#include <stdio.h> //libreria estandar

int main(){
	int num1 =0;
	int num2 =0;	//variables
	int suma =0;
	
	printf("Ingrese su 2 digitos enteros: \n");

	
	//  Validacion de numeros enteros
	if(scanf("%d %d", &num1, &num2) !=2){
		printf("Debe de ingresar numeros enteros\n");
		return 1; //Finaliza con error
	}
	
	
	//Operacion
	suma = num1 + num2;
	
	
	//mostramos el resultado
	printf("La suma  es: %d" ,suma);
	
	return 0;  // Termiina el programa
	
}
