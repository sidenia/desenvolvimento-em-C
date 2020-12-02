//	Calcule e mostre os 50 primeiros números pares e a soma deles.
//  0  2  4  6  8  10  ... 98

#include <stdio.h>

int main() {
    int cont = 0, soma = 0;

    while(cont < 100){
        printf("%d\n", cont);
        soma = soma + cont;
        cont = cont + 2;
    }
    printf("\n\n%d", soma);

    return 0;
}
