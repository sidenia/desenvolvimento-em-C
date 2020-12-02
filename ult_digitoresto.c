//para obter o ultimo digito de um numero, basta executar a operação resto por 10. 
//Ler um numero inteiro qualquer e exibir seu ultimo digito
#include <stdio.h>

int main () {
	int num, ultdigito; 
	
	printf ("Digite um numero qualquer: ");
	scanf ("%d", &num);
	
	ultdigito = num % 10;
		printf ("\n%d ultimo digito", ultdigito);
	
	return 0;
}
