#include <stdio.h>

int main (){
	
	float v, c; //funçao float e declaração de variáveis
	
	printf ("Digite o valor da venda: "); //entrada
	scanf ("%f", &v); //leitura da entrada e alocação no endereço de memória
	
	c = v * (float)10/100; //equação de processamento
	
	printf ("\nComissao devida: %.2f", c); //saída: resultado calculo comissao
		
	return 0;
}
