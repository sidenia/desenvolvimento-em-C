#include <stdio.h>

int main () {
	
	float v1, v2, res;
	
	printf ("Digite o valor em reais BRL: ");
	scanf ("%f", &v1);
	
	printf ("\nDigite o valor do cambio do dolar: ");
	scanf ("%f", &v2);
	
	res = v1 / v2;

	printf ("\nValor em dolar: USD %.2f", res);
	
	return 0;
}
