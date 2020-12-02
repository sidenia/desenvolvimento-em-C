	// Converter temperatura Celsius em Fahrenheit

#include <stdio.h>

	int main () {
	
	float c, f, res;
	
	printf ("Digite a temperatura em Celsius:\n");
	scanf ("%f", &c);
	
	f = (float) 9/5 * c + 32;
	
	printf ("\n%.2f graus em Celsius correspondem a %.2f graus em Fahrenheit:\n", c, f);


	return 0;	
	}
