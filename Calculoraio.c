#include <stdio.h>

int main () {

	float r, c, a, v;
	
	printf ("Digite o raio:\n");
	scanf ("%f", &r);
	
	c = 2 * 3.1415 * r;
	
	a = 3.1415 * r * r;
	
	v = (float) 4/3 * 3.1415 * r * r * r;
	
	printf ("\n %.2f Comprimento do raio\n %.2f Area do círculo\n %.2f Volume da esfera ", c, a, v);
	
	return 0;
}
