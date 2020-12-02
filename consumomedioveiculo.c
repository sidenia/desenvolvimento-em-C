// consumo medio veiculo km/l

#include <stdio.h>

int main () {
	
	float dkm, tcl, consumo; // Distancia em KM, Total consumo em litros, resultado
	
	printf ("Digite a distancia total de KM percorrido: ");
	scanf ("%f", &dkm);
	printf ("\nDigite o total de combustivel gasto em litros: ");
	scanf ("%f", &tcl);
	
	consumo = dkm / tcl;
	
	printf ("\nO consumo medio do veiculo e de %2.f km por litro\a", consumo);
	
	return 0;
}
