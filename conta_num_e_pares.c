//ler 10 valores e verificar quantos pares
//foram digitados
//2. Ler uma sequência de números inteiros e determinar se eles são pares ou não. Devera´ ser informado o número
//de dados lidos e número de valores pares. O processo termina quando for digitado o número 1000
//-> usando do-while

#include <stdio.h>

int main () {
    //declaração de variáveis
    int num, contador=0, contador_par=0;

    //entrada e processamento
    do {
        printf ("\nDigite um numero inteiro: ");
        scanf ("%d", &num);
        if (num % 2 == 0) { // o mesmo que (!(n%2))
            contador_par++;
        }
        contador++;
    } while (num < 1000);

    //saída
    printf ("\nForam digitados, %d numeros, sendo %d par(es)\n", contador, contador_par);
    return 0;
}
