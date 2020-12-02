//ler 10 valores e verificar quantos pares
//foram digitados

//usando o do_while

//contadores sao todos acumuladores

#include <stdio.h>

int main () {
//declaração de variaveis	
	int n,cont=1,cont_par=0; //n numero que usuario digita , cont contador do laço / conta pares quantos pares foram digitados;
	cont = 1;
	cont_par = 0;
//entrada e processsamento
	do {
		printf ("\nDigite um inteiro: ");
		scanf ("%d",&n);
		if (!(n%2)){ //essa sentenca é o mesmo que (n % 2 == 0) pergutnando se eh vdd que n%2 é falso
			cont_par++;
		}
		cont++;
		
	} while (cont <= 10);
//saida
	printf ("\nForam digitados %d par(es)\n)",cont_par);

	return 0;
}
