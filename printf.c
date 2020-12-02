#include <stdio.h>
#include <stdlib.h>

int main () {

	char letra = 'a';
	int num = 10;
	float n = 5.25;
	double x = 5.0e3;
	
	printf ("%c\n", letra);
	printf ("%d\n", letra);
	printf ("%.1d\n", num);
	printf ("%.1f\n", n);
	printf ("%.1f\n", x);
	

	//CHAR, a info pos sinal de atribuicao (=) sempre precisa ser escrita entre aspas simples
	// \n serve apenas para pular uma linha
	{
		char letra = 'a';
		int nro = 10;
		printf ("Letra c%, inteiro %d \n", letra, nro);
		
		//pode mostrar mais de uma varivavel ao mesmo tempo
	}
	
	{
		
		int num = 10;
		printf ("num: %d; num + 1: %d \n", num, num+1);
	}
	system ("pause");
	return 0;
}
