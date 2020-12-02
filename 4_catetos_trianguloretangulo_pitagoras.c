 //avaliação 1 Due Date 07.06.20
//)4) Ler os catetos de um triângulo retângulo e exibir a sua hipotenusa. DICA: lembra de Pitágoras!

#include <stdio.h>
#include <math.h>

int main () {
	
	float a,b,h;
	
	printf ("Digite o valor do cateto A:\n");
	scanf ("%f", &a);
	printf ("Digite o valor do cateto B:\n");
	scanf ("%f", &b);
	h = sqrt ((a * a) + (b * b));                   //equação direta ou sqrt (pow(a,2) + pow (b,2));
	printf ("Hipotenusa = %.2f\n", h);              //O 2 depois do %.2f significa que vai mostrar 2 casas decimais no resultado
	
	return 0; 
}
