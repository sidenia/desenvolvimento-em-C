#include <stdio.h>

int main(){
    int a, b, cont, soma=0;
    cont = 1;
    a = 0;
    b = 100;
    while(a < b){
        printf("%d: %d\n", cont, a);
        soma += a;
        a += 2;
        cont++;
    }
    printf ("\n%d\n", soma);
    return 0;
}
