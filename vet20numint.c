//ler 20 numeros inteiros e imprimi-los na ordem inversa
#include <stdio.h>
#define t 10

int main () {
	int vet[t];
	int i;
	
	printf ("Digite %d numeros inteiros:Elementos do vetor\n", t);
	for (i=0;i<=t-1;i++){
		printf ("Posicao %d =", i);
		scanf ("%d", &vet[i]);
	}
			
for (i=0;i<=t-1;i--){
	printf ("%d|", vet[i]);
}
	return 0;
}
