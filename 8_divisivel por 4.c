//avalia��o 1 Due Date 07.06.20
//8) Um n�mero qualquer � divis�vel por 4 se o n�mero formado pelos algarismos da dezena e da
//unidade for divis�vel por 4, por exemplo, 7916 � divis�vel por 4, pois 16 �. Implemente um programa
//que verifica se um n�mero inteiro � divis�vel por 4, de acordo com o algoritmo descrito.

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
