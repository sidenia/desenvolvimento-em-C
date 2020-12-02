//digite um valor interior entre 100 e 200
#include <stdio.h>

int main () {
	int n;
	do {
		
		printf ("\nDigite um numero entre 100 e 200: ");
		scanf ("%d", &n);
	}while (n < 100 || n > 200);
	printf ("\nObrigada, volte sempre!\n");
	
	return 0;
}
