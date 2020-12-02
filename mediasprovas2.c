#include <stdio.h>

int main () {
	
	float a, b, c, res;
	
	printf ("Digite as notas para ter a média:\n");
	scanf ("%f%f%f", &a, &b, &c);
	
	res = (float) (a + b + c)/3;
	
	prinft ("\nResultado = %.2f\n", res);
		
	
	return 0;
}
