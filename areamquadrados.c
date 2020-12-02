#include <stdio.h>
#include <math.h>

int main () {
	
	float c, l, res;
	
	printf ("Digite o comprimento em m: ");
	scanf ("%f", &c);
	
	printf ("\nDigite a largura em m: ");
	scanf ("%f", &l);

	res = c * l;
	
	printf ("\nArea em metros quadrados: %.2f", res);
	
	return 0;
}
