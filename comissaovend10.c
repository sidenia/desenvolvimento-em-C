#include <stdio.h>

int main (){
	
	float v, c; //fun�ao float e declara��o de vari�veis
	
	printf ("Digite o valor da venda: "); //entrada
	scanf ("%f", &v); //leitura da entrada e aloca��o no endere�o de mem�ria
	
	c = v * (float)10/100; //equa��o de processamento
	
	printf ("\nComissao devida: %.2f", c); //sa�da: resultado calculo comissao
		
	return 0;
}
