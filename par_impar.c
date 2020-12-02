// ler um número INTEIRO e dizer se ele é par ou ímpar

#include <stdio.h>
#include <locale.h>
int main() {
    int n1, r;
    setlocale (LC_ALL, "");
    printf("Digite um número: ");
    scanf("%d", &n1);
    r = n1 % 2;
    if (!r)){
        printf ("Número par");
    }
    else {
        printf ("Número ímpar");
    }
    return 0;
}
