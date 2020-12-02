//avaliação 1 Due Date 07.06.20
//8) Um número qualquer é divisível por 4 se o número formado pelos algarismos da dezena e da
//unidade for divisível por 4, por exemplo, 7916 é divisível por 4, pois 16 é. Implemente um programa
//que verifica se um número inteiro é divisível por 4, de acordo com o algoritmo descrito.

#include <stdio.h> 

int main (){
	
	int num;
	
	printf ("Digite um numero inteiro para saber se divisivel por 4: \n");
	scanf ("%d", &num);          
	
	if (num % 4 == 0){ 
	
		printf ("Numero divisivel por 4");
	}
	
	else {
		printf ("Numero NAO divisivel por 4");
		
	}
	
	return 0;
}
