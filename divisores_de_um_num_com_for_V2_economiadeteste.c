#include <stdio.h>

int main(){
    int num, i, metade;
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);
    
    //como depois da metade do numero na divisao, nao tem mais outros divisores, melhor fazer os testes só ate a metade
    metade = num / 2;
    printf ("\nDividosres de %d: \n1", num);
    
    for(i = 2; i <= metade; i++){
        if(num % i != 0){
            printf("\n%d", i);
        }
    } 
    
    //esse ultimo printf quem mostra o numero no resultado
    printf ("%d\n", num);
    return 0;
}
 
