//Exercico aula introdutoria Vetor

#include <stdio.h>

int main () {
	int vetor[5], i;
	
	for (i=0; i<5;i++) { 	// para indice i come�ando em 0, para indice menor que 5, ele varia de 1 em 1(i++)
		vetor[i] = i+1; 		// a variavel v, em cada posi��o i, recebe o valor de i + i.
		//scanf ("%d", &vetor[i]);
	printf ("posicao %d - valor %d", i, vetor[i]); // %d � i o indice, a posi��o e v[i] � o valor 
	}	
	return 0;
}
