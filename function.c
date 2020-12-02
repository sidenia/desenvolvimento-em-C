#include<stdio.h>
#include<stdlib.h>

main (){
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	verifica(numero);
}

void verifica(int numero){
	if(numero%2 == 0){
		printf ("O numero digitado e par", numero);
	}
	else{
		printf ("O numero digitado e impar", numero);
	}
	return;
}
