//ler um valor qualquer e dizer se ele é positivo (>=0) ou negativo

#include <stdio.h>

int main () {
    float num;
    printf ("digite um numero: ");
    scanf ("%f", &num);
    if (num >= 0) {
        printf ("\n%f e positivo\n", num);
    }
    else {
        printf ("\n%f não e positivo\n", num);
    }
    return 0;
}

