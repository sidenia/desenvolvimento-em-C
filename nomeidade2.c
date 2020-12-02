#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (void)  {

	char nome [61];
	char idade[2];
	char email [61];
	
	setlocale (LC_ALL,"");
	
	printf ("--- CADASTRO DE CLIENTE --- \n");
	printf ("Digite Seu nome: \n");
	
	scanf ("%s",nome);
	printf ("Seu nome foi armazenado com sucesso %s!\n", nome);
	getch ();
	
	printf ("\nDigite sua idade: \n");
	scanf ("%d", idade);
	printf ("Sua idade foi salva! \n");
	getch ();
	
	printf ("\nDigite seu e-mail: \n");
	scanf ("%d", email);
	printf ("\nInformações salvas com sucesso! Obrigada pelos dados! ");
	getch ();
		
	return 0;
}
