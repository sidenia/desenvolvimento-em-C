#include <stdio.h>

int main () {
    int n, d;
    printf ("digite um numero inteiro de 3 digitos: ");
    scanf ("%d", &n);
    printf ("\nnumero invertido: ");

    d = n % 10;
    printf ("%d", d);

    n = n / 10;
    d = n % 10;
    printf ("%d", d);

    n = n / 10;
    printf ("%d", n);
    printf ("\n");
    return 0;
}
