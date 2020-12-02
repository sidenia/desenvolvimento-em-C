// Converter temperatura Celsius em Kelvin
#include <stdio.h>

	int main () {
	
	float k, c, res;
	printf ("Digite a temperatura em Celsius:\n");
	scanf ("%f", &c);
	k = c + 273.15;
	printf ("\n%.2f graus em Celsius correspondem a %.2f graus em Kelvin:\n", c, k);

	return 0;	
	}
