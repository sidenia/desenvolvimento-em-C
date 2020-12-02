// Converter temperatura Kelvin em Celsius
#include <stdio.h>

	int main () {
	
	float k, c, res;
	printf ("Digite a temperatura em Kelvin:\n");
	scanf ("%f", &k);
	c = k - 273.15;
	printf ("\n%.2f graus em Kelvin correspondem a %.2f graus em Celsius:\n", k, c);

	return 0;	
	}
