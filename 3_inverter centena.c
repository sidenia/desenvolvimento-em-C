//avaliação 1 Due Date 07.06.20
//3) Agora um pouco de matemática: ler um número de 3 dígitos no formato CDU (não é preciso validar,
//considere que o usuário vai digitar certinho) e exibi-lo no formato UDC. Por exemplo, se o usuário
//digitar 427, o resultado a ser exibido é 724. O novo número deve ser armazenado numa variável
//antes de ser exibido

#include <stdio.h>

int main (){
	
 int num, u,d,c,inter_a,inter_b, res;
	
	printf("Insira o numero que deseja inverter: "); //321
	scanf("%d",&num);
	
	u = num % 10; // 1

	inter_a = (num - u)/10; //32
	d = inter_a % 10; //2

	inter_b = inter_a - d; // 32 - 2 = 30
	c = inter_b / 10; // 3

	res = u *100 + d * 10 + c;
	
	printf ("Numero invertido: %d", res);
		
return 0;
}
