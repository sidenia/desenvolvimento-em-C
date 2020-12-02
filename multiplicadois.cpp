#include <stdio.h>
#include <stdlib.h>

int main () {
	//declarando variaveis
	int numero1, numero2, multiplicacao;
	//entradas
	printf ("Digite um numero: ");
	scanf ("%d", &numero1);
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero2);
	//processamento
	multiplicacao = numero1 * numero2;
	//saidas
	printf ("multiplicacao = %d", multiplicacao);
	
	return 0;
}
