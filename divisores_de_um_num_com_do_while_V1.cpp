//ler inteiro positivo e validar com do while e exibir os divisores usando o for
#include <stdio.h>

int main () {
	int num, i;
	i = 1;
	do {
		printf ("Digite um numero inteiro positivo: ");
		scanf ("%d",&num);
	}while (num <= 0);

	do {
			if (num % i == 0){
			printf ("%d ", i);
			}
		i++;
	}while (i <= num); // para otimizar os testes e reduzir ao inves tambem de colocar (i <= num/2) 
	//melhor criar ua variavel metade
	
	return 0;
}
