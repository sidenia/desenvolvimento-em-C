//3) Sejam ae bos catetos de um triângulo retângulo. Calcular sua hipotenusa h, sabendo que h=sqrt(a2+b2)
#include <stdio.h>
#include <math.h>

int main () {
	
	float a,b,h;
	
	printf ("Digite o valor dos catetos A e B:\n");
	scanf ("%f%f", &a, &b);
	h = sqrt ((a * a) + (b * b)); //equação direta ou sqrt (pow(a,2) + pow (b,2));
	printf ("Hipotenusa = %.2f\n", h); //O 3 depois do %.3f significa que vai mostrar 3 casas decimais no resultado
	
	return 0;
}
