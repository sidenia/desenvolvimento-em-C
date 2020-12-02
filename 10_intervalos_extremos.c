//avaliação 1 Due Date 07.06.20
//10) Ler 2 valores a1 e a2 que representam os extremos de um intervalo [a1, a2]. Ler um 3º valor e
//dizer se ele pertence ou não ao intervalo lido.

#include <stdio.h>

int main (){
	
	int num1, num2, num3;
	
	printf ("digite dois numeros: \n");
	scanf ("%d%d", &num1,&num2);
	printf ("digite mais um numero para checar se pertence ao intervalo: \n");
	scanf ("%d", &num3);
	
	if (num3 > num1 && num3 < num2){
		printf ("O numero %d pertence ao intervalo de %d e %d! ", num3, num1, num2);
	}
	else{
		printf ("O numero não pertence ao intervalo! ");	
	}
	return 0;
}
