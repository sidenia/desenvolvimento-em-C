// Converter temperatura Fahrenheit em Celsius
#include <stdio.h>

	int main () {
	
	float c, f, res;
	printf ("Digite a temperatura em Fahrenheit:\n");
	scanf ("%f", &f);
	c = 5 * (f - 32) /9.0;
	printf ("\n%.2f graus em Fahrenheit correspondem a %.2f graus em Celsius:\n", f, c);

	return 0;	
	}
