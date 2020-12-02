//Ler um número inteiro entre 100 e 999 e imprimir cada um dos algarismos que compõe o número
//com do while
#include <stdio.h>

int main () {
	
	int num, algoritimos, c, d, u, aux, aux2;
	do {
		printf ("Digite um numero inteiro: \n");
		scanf ("%d", &num);
		}
	while (num < 100 || num > 999);
								//321
	u = num % 10; 				// 1
	d = ((num - u)/10) % 10;	// (321 - 1) = 320 / 10 = 32 resto 10 = 2
	aux = ((num - u)/10) - d;  // (321 - 1) = 320 / 10 = 32 - 2 = 30
	c = (aux / 10) % 10; // 30 / 10 = 3 resto = 3
	
	printf ("Algarismos sao: %d, %d e %d", c, d ,u);
	return 0;	
}
