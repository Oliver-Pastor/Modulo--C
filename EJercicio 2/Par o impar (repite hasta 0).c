#include <stdio.h>
int main(){
	int numeros[100]; //Array para guardar los numeros
	int cantidad =0; //Contador para saber cuandos numeos se guardaron
	int numero;      //Valor ingresado 
	int i =0;		//i para el for 
	
	printf("Ingrese enteros (0 para salir): "); //Mensaje principal
	
	do{
		if(scanf("%d", &numero) !=1){  //Verificamos que el numero ingresado d
			printf("Error: debe de ingresar un numero entero. Entrada invalida\n");
		    while(getchar()!= '\n'); //limpiamos el buffer
			return 1; //Finaliza con error 
		}
		if(numero !=0){
			numeros[cantidad]= numero; //Guardar numero
			cantidad++;		}
	} while(numero !=0);    //Se repide mientras se cumpla la condicion
	
	//Resultados
	printf("\n------Resultados------\n");
	for(i =0; i< cantidad; i++){       //For para recorrer todo los espacios del vector
		if(numeros[i] %2 ==0){         //comparacion para ver si es para
			printf("%d es PAR\n", numeros[i]);
		}
		else{
			printf("%d es IMPAR\n", numeros[i]);  //Caso contrario 
		}
	}
	printf("Fin");  //Mensaje final
	
	return 0;
}
