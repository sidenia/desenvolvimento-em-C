#include <stdio.h>
#include <math.h>
//distancia entre dois pontos

int main () {
	
	float x1, x2, y1, y2, res; //variaveis
	
	printf ("Digite as coordenadas do ponto p1:\n"); //entrada1 digitar ordenada e abcissa
	scanf ("%f%f", &x1, &y1); //leitura das entrada1
	
	printf ("Digite as coordenadas do ponto p2:\n"); //entrada2 digitar ordenada e abcissa
	scanf ("%f%f", &x2, &y2); //leitura das entrada2
	
	res = sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); //equação direta ou sqrt (pow(x1-x2, 2) + pow (y1-y2, 2));
	
	
	printf ("Resultado = %.3f\n", res); //O 3 depois do %.3f significa que vai mostrar 3 casas decimais no resultado
	
	return 0;
}
