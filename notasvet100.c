#include <stdio.h>

int main ()
{//declaraçao das variaveis
	int i; 							//numeros inteiros de 0 a 10
	float soma=0, media;			//variaveis da soma e media
	float notas[10];				//vetor capacidade para 100 notas
	
	for (i=0;i<10;i=i+1) 			//looping
		{
		printf ("Entre com a nota do %do aluno: ", i+1);		//solicitação de entradas
		scanf ("%f", &notas[i]);							//leitura e endereçamento de entradas
		soma = soma + notas[i];								//soma das entradas
		}	
		
		media = soma/10; 			//processamento
		printf("\nA media de todas as notas foi %.1f ", media);		//saida resultado media geral
		
			for (i=0;i<10; i=i+1)								//looping
			{
				if (notas[i] < media);								//condicional
			
				printf("\nA nota do %do aluno (%.2f) esta abaixo da media", i+1, notas[i]); //saidas
			
    	}
}
