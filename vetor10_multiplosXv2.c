//Ler um vetor de 10 números, depois ler um número x. Contar os múltiplos de x no vetor e mostrá-los na
//tela.

#include <stdio.h>
#define TAMANHO 10
int main(){
    int multiplos[TAMANHO], numero, i, x, contamult=0;
    
    printf("Digite 10 valores inteiros:\n");
    
    for(i = 0; i < TAMANHO; i++) {        
        scanf("%d", &numero);
    }
    printf("Digite um valor para X:\n");
    scanf ("%d", &x);  
              
    if(numero % x == 0){
    multiplos[TAMANHO] = numero;
    contamult = contamult +1;

	printf ("\nQnt multiplos de %d no vetor = %d", x, contamult);
    printf ("\nMultiplos % d\n", multiplos[TAMANHO]);    
    return 0;
	}
}
