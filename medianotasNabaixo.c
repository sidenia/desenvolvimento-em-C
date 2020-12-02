#include <stdio.h>

main()
{
float Nota1, Nota2, Nota3, media;
printf("Entre com a nota do 1o Aluno ");
scanf("%f",&Nota1);
printf("\nEntre com a nota do 2o Aluno ");
scanf("%f",&Nota2);
printf("\nEntre com a nota do 3o Aluno ");
scanf("%f",&Nota3);

media = (Nota1+Nota2+Nota3)/3;

printf("\nA media entre as notas dos alunos eh igual a %f ", media);

if (Nota1 < media) {
printf("\nA Nota do 1o aluno esta a abaixo da media");
}

if (Nota2 < media) {
printf("\nA Nota do 2o aluno esta a abaixo da media");
}

if (Nota3 < media) {
printf("\nA Nota do 3o aluno esta a abaixo da media");
}

}
