
//Ler um vetor de 8 posi��es e dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao
//final seu programa deve escrever a soma dos valores encontrados nas posi��es X e Y. N�o se esque�a de
//validar os valores X e Y, pois eles devem corresponder a posi��es v�lidas no vetor � no caso, devem ser
//de 0 a 7.

#include <stdio.h>
int main () {
    int v[8], i, x, y, soma;
    
    for (i=0; i<8; i++) {
        v[i] = i+1;
        printf ("pos %d -> valor %d\n", i, v[i]);
		}
		x = v[0];
        y = v[1];
        soma = x + y;
        printf ("\nPosicao do vetor 0 e 1\nSendo Valor de X = %d\nValor de Y = %d\nSoma X+Y = %d", x, y, soma);
    return 0;
}
