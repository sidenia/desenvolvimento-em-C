//avalia��o 1 Due Date 07.06.20
//12) Ler as coordenadas (x, y) de um ponto e dizer se ele pertence � origem, a um dos eixos ou ao 1�,
//2�, 3� ou 4� quadrante.

#include <stdio.h>
 
int main (){
	
	int x, y;
	
	printf ("Digite um valor para X e um para Y: ");
	scanf ("%d%d", &x,&y);
	
	if (x > 0 && y > 0){
		printf ("Os numeros estao no primeiro quadrante!");
	}
	else if (x < 0 && y > 0){
		printf ("Os numeros estao no segundo quadrante!");
	}
	else if (x < 0 && y < 0) {
		printf ("Os numeros estao no terceiro quadrante!");
	}	
	else if (x > 0 && y < 0) {
		printf ("Os numeros estao no quarto quadrante!");
	}
	return 0;
}
