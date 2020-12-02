//converter altura em metros para em centimetros
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	float m, cm;
	setlocale (LC_ALL,"");
	printf ("Digite a altura em metros: ");
	scanf ("%f", &m);
	cm = m * 100;
	printf ("\n %.2f em metros equivale a %.2f em centimentros\n", m, cm);
	system ("pause");	
	return 0;
}
