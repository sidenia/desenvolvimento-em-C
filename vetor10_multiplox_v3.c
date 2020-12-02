#include<stdio.h>
#define T 10
int main() {
	int vetor[T], multiplos[T], i, j, x, contamult;
	contamult = 0;
	for (i=0; i<T; i++) {
		printf("Digitei um numero inteiro %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\nDigite o valor de x:\n");
	scanf("%d", &x);
	
	//achar a primeira posição do vetor que tem um multiplo de x
	i = 0;
	while (i<T && vetor[i] % x!= 0) {
		i++; 
	}
	
	if (i<T){  
		multiplos[0] = vetor[i];
		contamult = 1; // já conta 1 multiplo de x encontrado
		for (j = i + 1; j < T; j++) {
			if (vetor[j] % x == 0) {
				multiplos[j] = vetor[j];
				contamult++;
			}
		}
		printf("Total de multiplos de %d = %d\n", x, contamult+1);
		printf("Multiplos de % d = 0 ", x);
			
		for (j = 0; j < contamult; j++) {
			printf("%d ", multiplos[j]);
		}
	}else{
		
		// se i = 5, quer dizer que não encontrou multiplos
		printf("Nao existem multiplos de %d no vetor.\n", x);
	}	
	return 0;
}
