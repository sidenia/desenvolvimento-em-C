//ler o valor do raio, calcular o comprimento da circunfer�ncia, a �rea do c�rculo
//o volume da esfera correspondentes e exibir os resultados
//comp = 2.pi.r, area = pi.r.r, vol = 4/3pi.r.r.r
#include <stdio.h>
#define PI 3.1415
int main () {
    //declarar vari�veis
    float r, c, a, v;
    //entrada de dados
    printf ("digite o raio: ");
    scanf ("%f", &r);
    //processamento
    c = 2 * PI * r;
    a = PI * r * r;
    v = (float)4/3 * PI * r * r * r;
    //sa�das
    printf ("\ncomprimento = %.3f\narea = %.3f\nvolume = %.3f\n", c, a, v);
    return 0;
}
