//valor de a e b ... ver qual o menor e ordenar, mostrar o intervalo entre {a, b}
#include <stdio.h>

int main () {
	
	int a, b;
	
	printf ("Digite o valor de a e b: ");
	scanf ("%d%d", &a, &b);
		for ( ; a<=b; a++){ // o mesmo que for (a; a<=b; a++)
		printf ("%d", a);
		}
		for ( ; b<=a; b++){ // o mesmo que for (a; a<=b; a++)
		printf ("%d", b);
		}
return 0;
}
