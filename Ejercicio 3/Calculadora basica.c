#include <stdio.h>
int main(){
	float num1=0;
	float num2=0;
	float resultado=0;
	char operador;
	
	
	
	printf("Ingrese la cantidad y operacion:\n");
	
	if (scanf("%f %c %f", &num1, &operador, &num2 ) !=3){
		printf("Formato invalido\n");
		return 1;
	}
	
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
			if(num2 !=0){
			
			resultado = num1 / num2;
		}
			else{
				printf("Error: division entre cero\n");
				return 1;
			}
			break;
			
		default:
			printf("Operador invalido.\n");
			return 1;
	}
	
	printf("%f %c %f= %f\n", num1, operador, num2, resultado);
	
	return 0;
}
