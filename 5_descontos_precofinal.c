//avalia��o 1 Due Date 07.06.20
//5) Em �pocas atuais, os comerciantes est�o oferecendo descontos para que possam continuar
//vendendo. Ler o pre�o de um produto e um percentual de desconto. Calcular e mostrar o valor do
//desconto e o pre�o final.

#include <stdio.h>
#include <locale.h>
// calculo valor final apos desconto na venda

int main () {
	
	float c, p, d, res; // declaracao de variaveis c valor da compra, p percentual de desconto, d desconto, res, resultado
	setlocale (LC_ALL,"");
	
	printf ("Digite o valor da compra: "); //Solicita��o entrada1
	scanf ("%f", &c); //leitura entrada1
	
	printf ("\nDigite o percentual de desconto em decimais: "); //Solicita��o entrada2
	scanf ("%f", &p);//leitura entrada2
	
	res = 	c - (c * p ); //equa��o de processamento
	d = c * p;
	
	printf ("\nValor do desconto: %.2f \nValor a pagar: %.2f", d, res); //saida resultado
	
	return 0;
}
