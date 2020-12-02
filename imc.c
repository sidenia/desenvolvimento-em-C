// calcula IMC

#include <stdio.h>
#include <math.h>

int main () {
	
	float p, a, imc;
	
	printf ("Digite seu Peso em kg e Altura em m:\n");
	scanf ("%f%f", &p, &a);
	
	imc = p / (a * a);	
	
	printf ("\nSeu IMC esta em %2.f ", imc);
	
	if (imc >=18.5 <=24.9) {
	printf ("\nDentro da normalidade");
	}
	else {
	printf ("Consultar um nutricionista! ");
    } 

	//if (imc <18.5) 			printf ("\nDesnutricao");
	//if (imc >=18.5 <= 24.9) 	printf ("\nDentro da normalidade");
	//if (imc >24.9 <= 30) 		printf ("\nSobrepeso");	 //ver com alguem porque aparece sobrepeso
	//if (imc >30) 				printf ("\nObesidade");
	
	return 0;
}

