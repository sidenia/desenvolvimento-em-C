//equação do 2o grau
#include <math.h>
#include <stdio.h>
int main () {
    float a, b, c, delta, x1, x2;
    printf ("digite os coeficientes a, b, c\n");
    scanf ("%f%f%f", &a, &b, &c);
    if (a!=0) {
        delta = b*b - 4*a*c;
        if (delta < 0) {
            printf ("\nNao existem raizes reais\n");
        }
        else {
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            printf ("\nx1 = %.3f\nx2 = %.3f\n", x1, x2);
        }
    }
    else {
        printf ("\nNao e equacao do 2o grau\n");
    }
    return 0;
}
