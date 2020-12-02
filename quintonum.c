#include <stdio.h>

int main () {
	
	float num1, res;
	
	printf ("Digite um numero real: ");
	scanf ("\n%f", &num1);
	
	res = num1 / 5;
	
	printf ("\nUm quinto representa %.2f", res);
	
	return 0;
}
