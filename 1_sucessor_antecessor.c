//avaliação 1 Due Date 07.06.20
//1) Ler um número inteiro, mostrar seu sucesso e seu antecessor

#include <stdio.h>

int main (){
	
	int num, ant, suc;
	printf ("Digite um numero inteiro: \n");
	scanf ("%d", &num);
	
	ant = num-1;
	suc = num+1;
	
	printf ("Antecessor do numero =  %.2d\nSucessor do numero = %.2d\n", ant, suc);
	
	return 0;
}
