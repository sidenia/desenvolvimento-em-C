#include <stdio.h>

int main () {
	
	float s, r, total;
	
	printf ("Digite o salario atual: ");
	scanf ("%f", &s);
	
	printf ("\nDigite o percentual de reajuste em decimais: ");
	scanf ("%f", &r);
	
	total = s * r + s;	
	
	printf ("\nSalario Atual: %.2f", total);
	
	return 0;
}
