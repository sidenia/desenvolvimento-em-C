#include <stdio.h>
#include <math.h>

int main () {
	
	float num1, res;
	
	printf ("Digite um numero real: ");
	scanf ("%f", &num1);

	res = num1 * num1;
	
	printf ("Resultado: %.2f", res);
	return 0;
}
