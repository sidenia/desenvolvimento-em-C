//avalia��o 1 Due Date 07.06.20
//2) Ler o valor de um �ngulo em graus e exibir, o seno, o cosseno e a tangente desse �ngulo. DICA:
//verifiquem qual � o par�metro dessas fun��es na linguagem C, talvez voc� precise verificar alguma
//transforma��o grau <-> radianos.

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main ()
{
float angulo, seno, cosseno, tangente;
    
    printf ("\nDigite um angulo em graus: ");
    scanf ("%f", &angulo);
    
    seno = sin(angulo * PI / 180);
    cosseno = cos (angulo * PI / 180);
    tangente = tan (angulo * PI / 180);
    
    printf ("Seno: %.8f\nCosseno: %.8f\nTangente: %.8f", seno, cosseno, tangente); 
   
    return 0;
}
