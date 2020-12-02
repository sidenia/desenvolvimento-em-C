#include <stdio.h>
#include <math.h>

int main () {
	
	float c, j, m, f; //capital, taxa de juros fixa, periodo de aplicacao em meses, montante final
	
	printf ("Digite o capital inicial R$ : ");
	scanf ("%f", &c);
	printf ("\nDigite a taxa de juros fixa em percentual: ");
	scanf ("%f", &j);
	printf ("\nDigite o periodo de aplicacao em meses: ");
	scanf ("%f", &m);
	
	f = c * pow (1+j/100, m);
	
	printf ("\nO Montante final sera R$ = %2.f\a", f);
	
	return 0;
}
