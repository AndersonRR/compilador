#include <math.h>;
#include <stdlib.h>;
#include <stdio.h>;

int main() {

	float numeroA;
	float numeroB;

	printf("NumeroA\n");
	scanf("%f", &numeroA);

	printf("NumeroB\n");
	scanf("%f", &numeroB);

	if(numeroA > 10)
		printf("AmaiorQueDez\n");

	if(numeroB > 10)
		printf("BmaiorQueDez\n");

	if(numeroA > numeroB)
		printf("AmaiorQueB\n");
	
	if(numeroA < numeroB)
		printf("BmaiorQueA\n");

	if(numeroA == numeroB)
		printf("BigualA\n");

	float soma = numeroA + numeroB;

	printf("%2.0f\n", soma);

	float resultado = 5 + 6;

	printf("%2.0f\n", resultado);

	printf("Marcos Cavalheiro\n");

	return 0;
}


