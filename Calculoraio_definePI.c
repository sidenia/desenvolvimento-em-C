#include <stdio.h>
#define PI 3.1415

int main () {

	float r, c, a, v;
	
	printf ("Digite o raio:\n");
	scanf ("%f", &r);
	
	c = 2 * PI * r;
	
	a = PI * r * r;
	
	v = (float) 4/3 * PI * r * r * r;
	
	printf ("\n %.2f Comprimento do raio\n %.2f Area do círculo\n %.2f Volume da esfera ", c, a, v);
	
	return 0;
}

