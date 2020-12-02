//ler o valor da compra e a opção de pagamento ("1 - a vista, 2 - a prazo")
//na opção a vista, perguntar se é boleto ou cartão, para boleto 10% de desconto
//para cartão nada
//na opção a prazo, perguntar o número de parcelas (2 ou 3)
//em todos os casos, vamos prever escolhas inválidas
#include<stdio.h>
int main () {
    float compra;
    int opcao_pagto, parcelas;
    char boleto_cartao;
    printf ("digite o valor da compra: ");
    scanf ("%f", &compra);
    printf ("\ndigite a opcao de pagamento \n1 - a vista\n2 - a prazo\n--> ");
    scanf ("%d", &opcao_pagto);
    if (opcao_pagto == 1) { //pagamento a vista
        printf ("\ndigite 'b' para boleto ou 'c' para cartao: ");
        scanf (" %c", &boleto_cartao);
        if (boleto_cartao == 'b' || boleto_cartao == 'B') {
            //realizar descontos variáveis:
            //até 200: 5%
            //até 500: 7%
            //até 1000: 10%
            //acima 15%
            if (compra <= 200) {
                printf ("\nvalor a pagar: R$ %.2f\n", 0.95 * compra);
            }else if (compra <= 500){
                printf ("\nvalor a pagar: R$ %.2f\n", 0.93 * compra);
            }else if (compra <= 1000){
                printf ("\nvalor a pagar: R$ %.2f\n", 0.9 * compra);
            }else{
                printf ("\nvalor a pagar: R$ %.2f\n", 0.85 * compra);
            }
        }
        else if (boleto_cartao == 'c' || boleto_cartao == 'C') {
            printf ("\nValor a pagar: R$ %.2f\n", compra);
        }
        else {
            printf ("\nopcao de forma de pagamento invalida\n");
        }
    }
    else if (opcao_pagto == 2) { //pagamento a prazo
        printf ("digite o numero de parcelas: ");
        scanf ("%d", &parcelas);
        if (parcelas == 2) {
            printf ("\nvalor de cada parcela = R$%.2f", compra/2);
        }
        else if (parcelas == 3) {
            printf ("\nvalor de cada parcela = R$%.2f", compra/3);
        }
        else {
            printf ("\nnumero de parcelas invalido\n");
        }
    }
    else {
        printf ("\nopcao de pagamento invalida\n");
    }
    return 0;
}
