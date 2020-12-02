//avaliação 1 Due Date 07.06.20
//9) Ler 5 números e mostras o maior e o menor valores lidos. Não usar laço

#include <stdio.h>

int main (){
	
	int n1, n2, n3, n4, n5, menor, maior;
	
	printf ("Digite 5 numeros: \n");
	scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
	
	if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5) {  
            maior = n1;
			} 
        else if  (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5) {
            maior = n2;
			}
        else if  (n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5) {   
            maior = n3;
			}
        else if  (n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5) {  
            maior = n4;
			}
        else {    
            maior = n5;
			}
         
    if  (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5) {
            menor = n1;
			}
        else if  (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5) {
            menor = n2;
			}
        else if  (n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5) {
            menor = n3;
			}
        else if  (n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5) {
            menor = n4;
			}
        else {
            menor = n5;
			}
    
	printf ("O maior numero digitado foi %d\nO menor numero digitado foi %d", maior, menor);
 
	return 0;
}
