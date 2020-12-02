//ler a altura h de uma pessoa (float) e o sexo (char m ou f). Calcular o peso ideal
//de acordo com a seguinte fórmula:

//para homens: pi = 72,7*h - 58
//para mulheres: pi = 62,1 - 44,7

#include <stdio.h>
int main()
{
    float alt;
    char sexo;
    float pi;

    printf("digite sua altura:\n");
    scanf("%f", &alt);

    printf("digite seu sexo (""f"" para feminino ou ""m"" para masculino):\n");
    scanf(" %c", &sexo);

    if (sexo=='f' || sexo =='F'){
        pi = 72.7*alt-58;
    } else{
        pi = 62.1*alt-44.7;
    }
    printf("\n o seu peso ideal e: %f", pi);
    return 0;
}
