#include <stdio.h>
#include <locale.h>
// calculo valor final apos desconto na venda

int main () {
	
	float c, p, d, res; // declaracao de variaveis c valor da compra, p percentual de desconto, d desconto, res, resultado
	setlocale (LC_ALL,"");
	
	printf ("Digite o valor da compra: "); //Solicitação entrada1
	scanf ("%f", &c); //leitura entrada1
	
	printf ("\nDigite o percentual de desconto em decimais: "); //Solicitação entrada2
	scanf ("%f", &p);//leitura entrada2
	
	res = 	c - (c * p ); //equação de processamento
	d = c * p;
	
	printf ("\nValor do desconto: %.2f \nValor a pagar: %.2f", d, res); //saida resultado
	
	return 0;
}
