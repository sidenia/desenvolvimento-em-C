#include <stdio.h>

int main () {
	
	int contador = 0, limite = 20;
	
	while (contador < limite){
		// se inserir o contador antes do printf ele começa a contar de 1 ate 20
		printf ("Estamos na contagem: %d\n", contador); 
		contador = contador + 1; //contador inserido depois do printf conta de 0 a 10
	}
	
}
