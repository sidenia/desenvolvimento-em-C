//avalia��o 1 Due Date 07.06.20
//6) Sabendo que uma hora tem 60 minutos, ler a hora atual (hora e minutos) e mostrar quanto
//minutos do dia se passaram at� o momento. Por exemplo, se o usu�rio digitar horas = 8 e minutos =
//10, a resposta � 490 minutos.

#include <stdio.h>

int main (){
	
	int hora, min, atm;
	
	printf ("Digite a hora atual separando hora e minutos por um espaco em branco: \nUsar formato 24h\n");
	scanf ("%d%d", &hora, &min);
	
	atm = (hora *60) + min;
	
	printf ("Ate o momento se passaram %d minutos! ", atm);
	
	return 0;
}
