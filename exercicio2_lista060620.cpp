//ler 10 valores e verificar quantos pares
//foram digitados
//2. Ler uma sequ�ncia de n�meros inteiros e determinar se eles s�o pares ou n�o. Devera� ser informado o n�mero
//de dados lidos e n�mero de valores pares. O processo termina quando for digitado o n�mero 1000
//-> usando do-while

#include <stdio.h>

int main () {
    //declara��o de vari�veis
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

    //sa�da
    printf ("\nForam digitados, %d numeros, sendo %d par(es)\n", contador, contador_par);
    return 0;
}
