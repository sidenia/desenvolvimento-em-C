//avaliação 1 Due Date 07.06.20
//11) Ler 3 valores supostamente em ordem (os valores devem ser digitados em ordem crescente). Ler
//um quarto valor qualquer e exibir os 4 valores em ordem crescente. Por exemplo, se o usuário digitar
//3, 5, 7 e depois o 6, a saída deve ser 3, 5, 6, 7.

#include <stdio.h>

int main() {
    int a, b, c, d, tmp; //tmp = variavel temporaria
    printf("Digite 4 numeros, sendo os 3 primeiros sequenciais e o ultimo aleatorio:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d); // 2 4 6 e 5
    
	if (d < a) { // 5 < 2  (5 é menor que 2)
        tmp = d; // 
        d = c;
        c = b;
        b = a;
        a = tmp;
    }
    else if (d < b) { // so vao testar até o b pq pressupoe-se que o a já é menor que todo mundo.
        tmp = d;
        d = c;
        c = b;
        b = tmp;  
    }
	else if (d < c) { // 5 < 6 -  so vao testar até o c pq pressupoe-se que o a e b já é menor os outros.
        tmp = d; // se 5 é menor que 6 entao  a variavel tmp recebe 5
        d = c; // a variavel d recebe 6
        c = tmp; // a variavel c recebe 5
        
    }
     printf("%d%d%d%d", a, b, c, d);
}
