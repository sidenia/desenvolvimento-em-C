#include <stdio.h>

int main () {
	
	int a;
	float v, t;
	
	printf ("Digite o tamanho do arquivo: ");
	scanf ("%d", &a);
	printf ("Digite a velocidade da conexao: ");
	scanf ("%f", &v);
	 
	t = v/a;
	
	printf ("Tempo de transmissao = %.1fs\n", t);
	
	return 0;
}
