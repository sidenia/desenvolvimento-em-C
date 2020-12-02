//Ler um numero real com casas depois da virgula. Exibir a parte inteira e sua parte decimal separadas.

#include <stdio.h>

int main () {
	float numero, inteira, decimal;
	
	printf (" Digite um numero: ");
	scanf ("%f", &numero);
	
	inteira = (int) numero;
	decimal = numero - inteira;	
	
	printf ("\n Parte Inteira = %f \n Parte Decimal = %f", inteira, decimal);
	
	return 0;
}
