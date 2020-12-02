#include<stdio.h>
int main (){
	
    float num;
    printf ("Digite um valor: ");
    scanf ("%f", &num);
    
    if (num != 0){
    	
    	num = 1 / num;
        printf ("O inverso do valor digitado e %f", num);
    }
    else{ 
        printf ("Erro: O valor digitado nao pode ser igual a zero");
    }
    
    return 0;
}
