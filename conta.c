//pedir para o usu�rio digitar um valor entre 0 e 10 (inclu�dos)
#include <stdio.h>

int main () {
    int n;
    printf ("digite um valor entre 0 e 10: ");
    scanf ("%d", &n);
    while (n<0 || n>10) {
        printf ("O valor deve estar entre 0 e 10: ");
        scanf ("%d", &n);
    }
    return 0;
}
