#include<stdio.h>
#define TAMANHO 10
int main() {
	int vetor[TAMANHO], vetor_multiplos[TAMANHO], i, j, x, conta_multiplos = 0;
	i=0;
	
	do {
	printf("Digite o %d numero: ", i + 1);
	scanf("%d", &vetor[i]);
	i++;
	}
	while (i<TAMANHO);

	printf("\nDigite o valor de x: ");
	scanf("%d", &x);
	i=0;	
	while (i < TAMANHO && vetor[i] % x != 0) {
		i++;
	}
	if (i < TAMANHO){
		vetor_multiplos[0] = vetor[i];
		conta_multiplos = 1;
		for (j = i + 1; j < TAMANHO; j++) {
			if (vetor[j] % x == 0) {
				vetor_multiplos[conta_multiplos] = vetor[j];
				conta_multiplos++;				
			}
		}
		printf("Qnt de multiplos de %d = %d\n", x, conta_multiplos);
		printf("Multiplos de %d no vetor -> ", x);
	
		for (i = 0; i < conta_multiplos; i++){
		printf("%d ", vetor_multiplos[i]);
		}		
	}else{
		printf("Nao contem multiplos de %d na lista de valores.\n", x);
	}	
	return 0;
}
