//1) Ler 2 valores quaisquer e armazená-los nas variáveis a e b. Trocar os valores entre as variáveis e exibir o resultado.
#include <stdio.h>

int main () {

float a, b, c;

printf ("Digite sequencialmente um valor para A e outro para B: \n");
scanf ("%f%f",&a, &b);
c=b;
b=a;
a=c;
printf ("Os numeros digitados em sequencia invertida sa A=%.2f e B=%.2f",a,b);

return 0;
}
