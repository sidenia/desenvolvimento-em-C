// ler um n�mero INTEIRO e dizer se ele � par ou �mpar

#include <stdio.h>
#include <locale.h>
int main() {
    int n1, r;
    setlocale (LC_ALL, "");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    r = n1 % 2;
    if (!r)){
        printf ("N�mero par");
    }
    else {
        printf ("N�mero �mpar");
    }
    return 0;
}
