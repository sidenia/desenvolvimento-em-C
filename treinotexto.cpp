#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero1, numero2, soma;
	
	printf ("Digite um número: ");
	scanf ("%d", &numero1);
	
	
	printf ("Digite um número: ");
	scanf ("%d", &numero2);
				
	soma = numero1 + numero2;
	
	printf ("\nResultado: %d", soma);

	return 0;
}
