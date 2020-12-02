#include <stdio.h>

int main () {
	
	float a, b, c, res;
	
	printf ("Digite três notas para ter a média:\n");
	scanf ("%f%f%f", &a, &b, &c);
	
	res = (float) (a + b + c)/3.0; //Para ler o numero float digitar 3.0 ou comando (float)antes do numero
	
	printf ("\nResultado = %.1f\n", res);
	
	if ( res >= 6.0 ) printf ("Aprovado\n");
	else printf ("Reprovado\n");
	
	return 0;
}
