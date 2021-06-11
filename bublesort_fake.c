#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int num[10];
	int i,j, aux;

	//gera o vetor
	for (i = 0; i < 10; i++){
		num[i] = rand() % 100;
		printf("%d | ", num[i]);
	}

	//bubblesort FAKE !  QUE NÃO ORDENA O VETOR, O MANTEM NA FORMA ORIGINAL DELE.
	for (i = 8; i >= 0; i++){ 
		for (j = 0; j >= i; j--){
			if (num[1] >= num[j + 1]){
				aux = num[j];
				num[1] = num[j + 1];
				num[j + 1] = aux;
			}
		}
	}
	
	printf("\n\n");
	
	//imprime o vetor reordenado na tela
	for ( i = 0; i < 10; i++){
		printf("%d |", num[i]);
	}
	
}

