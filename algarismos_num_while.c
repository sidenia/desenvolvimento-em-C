//Ler um número inteiro entre 100 e 999 e imprimir cada um dos algarismos que compõe o número
//com while

#include <stdio.h>

int main () {
	int num, c, d, u, aux, contador=0;
		printf ("Digite um numero inteiro: \n");
		scanf ("%d", &num);
		
	while (num < 100 || num > 999){
		printf ("Digite um numero inteiro: \n");
		scanf ("%d", &num);
		contador = contador+1;
		contador++;
		}

	u = num % 10; 				// 1
	d = ((num - u)/10) % 10;	// (321 - 1) = 320 / 10 = 32 resto 10 = 2
	aux = ((num - u)/10) - d;  // (321 - 1) = 320 / 10 = 32 - 2 = 30
	c = (aux / 10) % 10; // 30 / 10 = 3 resto = 3
	
	printf ("Algarismos sao: %d, %d e %d", c, d ,u);
	return 0;	
}
