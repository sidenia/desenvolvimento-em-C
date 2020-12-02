#include <stdio.h>

int main () {
    int i = 5;
    float m = 0.02;
    printf ("%d\n", i);
    i-= -i; //i = i - (-i)
    printf ("%d\n", i);
    i-= -i;
    printf ("%d\n", i);
    while (m <= 2.75) {
        printf ("m = %f\n", m);
        m++;
    }

    return 0;
}
