//avaliação 1 Due Date 07.06.20
//7) Ler um número inteiro e dizer se ele é múltiplo de 7.

#include <stdio.h>
#include <locale.h>

int main (){
	
	int num;
	setlocale (LC_ALL,"");
	
	printf ("Digite um numero inteiro para saber se multiplo de 7: \n");
	scanf ("%d", &num);          
	
	if (num % 7 == 0){ 
	
		printf ("O numero é multiplo de 7");
	}
	
	else {
		printf ("O numero NÃO é multiplo de 7");
		
	}
	
	return 0;
}
