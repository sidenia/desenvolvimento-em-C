#include <stdio.h>

int main () {
    int a = 7, b = -1, c = 0;

    printf ("teste de c=0: %d\n", c==0);
    printf ("teste de a > b: %d\n", a > b);
    printf ("teste de a < b: %d\n", a < b);
    printf ("negacao de c: %d\n", !c);
    printf ("negacao de b: %d\n", !b);
    printf ("teste a>b && c: %d\n", a>b && c);
    printf ("teste a>b && a>c: %d\n", a>b && a>c);
    return 0;
}
