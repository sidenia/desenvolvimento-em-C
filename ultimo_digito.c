//para obter o �ltimo digito de um n�mero, basta executar a opera��o
//resto por 10. Ler um n�mero inteiro qualquer e exibir seu �ltimo
//d�gito

#include <stdio.h>
int main()
{
    int numero, ultimo_digito;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    ultimo_digito = numero % 10;
    printf("%d", ultimo_digito);

    return 0;
}
