#include <stdio.h>

int main () { //inicio main
    //declarando variáveis
    int numero1, numero2, soma;
    //entrada de dados
    printf("digite o primeiro valor: ");
    scanf("%d", &numero1); //leitura de entradas
    printf("digite o segundo valor: ");
    scanf("%d", &numero2);//leitura de entradas
    //processamento
    soma = numero1 + numero2;
    //saida
    printf ("soma = %d", soma);
    return 0;
} //fim main
