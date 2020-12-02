//calcula o dobro de um numero real
#include <stdio.h>

int main () {
	
	float a, res;  //declaração de variáveis
	
	printf ("Digite um numero real qualquer: "); //Solicitação de entradas
	scanf ("%f", &a);//leitura de entradas
	
	res = a * 2; //equação para processamento
	
	printf ("\n Dobro do numero: %.2f", res);//saidas
	
	return 0;
}
