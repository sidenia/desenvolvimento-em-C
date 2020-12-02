//valor de a e b ... ver qual o menor e ordenar, mostrar o intervalo entre {a, b}
#include <stdio.h>

int main () {
	
	int a, b, i;
	
	printf ("Digite o valor de a: ");
	scanf ("%d", &a);
	
	printf ("Digite o valor de b: ");
	scanf ("%d", &b);
		
	if (a < b){
		for (i = a; i<=b; i++){ // o mesmo que for (a; a<=b; a++)
		printf ("%d", i);
		}
}
	else {
		for (i = b; i<=a; i++){ // o mesmo que for (a; a<=b; a++)
		printf ("%d", i);
		}
	}
return 0;
}
