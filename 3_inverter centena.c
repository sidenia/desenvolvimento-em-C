//avalia��o 1 Due Date 07.06.20
//3) Agora um pouco de matem�tica: ler um n�mero de 3 d�gitos no formato CDU (n�o � preciso validar,
//considere que o usu�rio vai digitar certinho) e exibi-lo no formato UDC. Por exemplo, se o usu�rio
//digitar 427, o resultado a ser exibido � 724. O novo n�mero deve ser armazenado numa vari�vel
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
