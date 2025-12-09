#include <stdio.h> //Libreria de entrada y salida

int main(){
	char linea[50];  //array para guardar la cadena de caracteres para usar fgetrs
	float num1=0;	 
	float num2=0;	 //Varriables para las operaciones
	float resultado=0;
	char operador;   //variable tipo char por el operador
	
	
	
	printf("Ingrese la cantidad y operacion:\n");   //Mensaje 
	
	if(fgets(linea, sizeof(linea), stdin) == NULL){  //Lee la line entera y lo copia en linea.
		printf("Error al leer\n");
		return 1;
	}
	
	//Validamos que se cumppla con el formato deseado numero operador numero 
	if (sscanf(linea, "%f %c %f", &num1, &operador, &num2 ) !=3){
		printf("Formato invalido\n");
		return 1;
	}
	
	//los casos de witch
	switch(operador){
		case'+':
			resultado = num1 + num2;
			break;
			
		case'-':
			resultado = num1 - num2;
			break;
			
		case'*':
			resultado = num1 * num2;
			break;
			
		case'/':
			if(num2 !=0){  //Si num2 es diferente de cero realiza la division
			
			resultado = num1 / num2;
		}
			else{
				printf("Error: division entre cero\n");  //caso contrario error
				return 1;
			}
			break;
			
		default:
			printf("Operador invalido.\n"); //si el operador es invalido
			return 1;
	}
	
	printf("%f %c %f= %f\n", num1, operador, num2, resultado);  //Imprimimos resultados
	
	return 0;  //finaliza el programa
}
