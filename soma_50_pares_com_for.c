//	Calcule e mostre a soma dos 50 primeiros números pares
//  0  2  4  6  8  10  ... 98

#include <stdio.h>

int main() {
    int cont = 0, soma = 0;

	//inicio	teste	 passo
	for (cont;cont<100;cont+=2){
		soma = soma + cont;
	}
    printf("\n\n%d", soma);

	return 0;
}
