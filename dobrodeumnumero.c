//calcula o dobro de um numero real
#include <stdio.h>

int main () {
	
	float a, res;  //declara��o de vari�veis
	
	printf ("Digite um numero real qualquer: "); //Solicita��o de entradas
	scanf ("%f", &a);//leitura de entradas
	
	res = a * 2; //equa��o para processamento
	
	printf ("\n Dobro do numero: %.2f", res);//saidas
	
	return 0;
}
