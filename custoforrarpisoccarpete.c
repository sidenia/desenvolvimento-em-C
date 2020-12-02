// preço m2 carpete

#include <stdio.h>

int main () {
	
	float c, l, pcarp, ptt; // complimento, largura, total m2 espaço, preço 1m2 de carpete, preço total para forrar a sala 
	
	printf ("Digite o comprimento e a largura da sala em m: ");
	scanf ("%f%f", &c,&l);
	printf ("\nDigite o o preço do metro quadrado do carpete: ");
	scanf ("%f", &pcarp);
	
	ptt = c * l * pcarp;
	
	printf ("\nTotal gasto para forrar o piso sera de  %2.f reais \n",ptt);
	
	return 0;
}
