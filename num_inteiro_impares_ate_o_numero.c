//Leia um n�mero inteiro N e depois imprima os N primeiros n�meros naturais �mpares

#include <stdio.h>
int main(){
    int num, conta_impar=1; // come�a em 1 pois se come�asse em 0 mostraria os pares.
    
    do{
        printf("Digite um inteiro positivo: ");
        scanf("%d", &num);
    }while(num <= 0);

	if(num % 1 == 0){ // primeiro teste
		    for( ;conta_impar <= num; conta_impar+=1){ // conta_impar = INICIO - conta_impar<=num = TESTE  conta_impar+=1 = passo
            printf(" %d\n", conta_impar); 	//imprime o resultado
              conta_impar++; //atualiza o contador
        }
    }
    return 0;
}
