//Ler um vetor de 10 n�meros, depois ler um n�mero x. Contar os m�ltiplos de x no vetor e mostr�-los na
//tela.

#include <stdio.h>
int main () {
    int v[10], i, x, conta_mult=0;
    
    for (i=0; i<10; i++) {
        v[i] = i+1;
        x = v[4];
			if (x % v[i] == 0){
			conta_mult = conta_mult + 1;					
			}
		}
		        printf ("\nPosicao 4 = Valor %d\nQnt multiplos de %d no vetor = %d\nMultiplos ?", x, x, conta_mult);
    return 0;
}
