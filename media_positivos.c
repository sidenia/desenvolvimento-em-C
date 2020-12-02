// Leia 10 inteiros positivos, ignorando os não positivos,
// e imprima sua média.
#include <stdio.h>
int main() {
    int cont = 1, numero, cont_positivos = 0, soma;
    float media;
    printf("Digite 10 numeros:\n");
    while(cont <= 10){
        scanf("%d", &numero);
        if( numero >= 0){
            soma = soma + numero;
            cont_positivos++;
        }
        cont++;
    }
    if (cont_positivos > 0) {
        media = (float)soma / cont_positivos;
        printf("A media eh %.2f", media);
    }
    else {
        printf ("\nnao foram digitados valores positivos\n");
    }
    return 0;
}
