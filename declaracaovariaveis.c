#include <stdio.h>
#include <stdlib.h>

int main () {
	
	tipo nome;
	char	letras a, b, c, d... 							 									//CHAR caracteres
	int		numeros 0, 1, 2, 4...							 									//INT numeros inteiros
	float	nao pode usar caracteres especiais tipo ! & *, à, é, Ç, &, 							//FLOAT numeros reais
	double	nem pode palavras reservadas (que ja tenham um sig. na linguagem C, ex Int etc...	//DOUBLE numeros reais maior precisao
	
// NAO PODE começar o nome de uma variavel com numero, pois da erro. POde com letra ou com _ underscore
//a variavel precisa ser escrita em todo o programa do jeito que voce declarou ela no inicio, considerar maiusculas e minusculas.
//variaveis do tipo char, se vai declarar um valor fixo depois da igualdad precisa escrever entre aspas simples ex: char letra = 'a';
//no tipo Char como usa a tabela asc, é possivel armazenar numeros pequenos ate 127. Esse tipo ocupa menos menorias que numeros inteiros.


	int nro = 10;
	float n = 5.25;
	double = 5.0e3; //escrita em notacao cientifica, sig 5 x 10^3 (elevado a 3).
	
	//podemos declarar variaveis do mesmo tipo juntas ao inves de repetir o tipo ex:
	
	int num1, num2, num3, etc;
					
	system ("pause");
	return 0;
}
