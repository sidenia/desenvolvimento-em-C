#include <stdio.h>

int main () { //inicio main
    //declarando variáveis
    int numero1, numero2, numero3, soma;
    //entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1); //leitura de entradas
    printf("\nDigite o segundo valor: ");
    scanf("%d", &numero2);//leitura de entradas
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &numero3);//leitura de entradas
    //processamento
    soma = numero1 + numero2 + numero3;
    //saida
    printf ("\nSoma = %d", soma);
    return 0;
} //fim main
