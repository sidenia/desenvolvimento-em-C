#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero1, numero2, multiplicacao;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero1);
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero2);
	
	multiplicacao = numero1 * numero2;
	
	printf ("\nResultado: %d\a", multiplicacao);
	
	return 0;
}
