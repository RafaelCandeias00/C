#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int op;
	float fahr, celsius, kelvin;
	char resp;

	printf("\n--- Conversor de temperatura ---\n");

	do{
		printf("\nQual temperatura você quer converter?\n");
		printf("[ 1 ] - Fahrenheit para Celsius \n[ 2 ] - Celsius para Fahrenheit \n[ 3 ] - Celsius para Kelvin\n");
		scanf("%i", &op);
		switch (op){
		case 1:
			printf("\n--- Fahrenheit para Celsius ---\n");

			printf("Coloque a temperatura: ");
			scanf("%f", &fahr);
			celsius = (5 * fahr - 160) / 9;
			printf("A temperatura convertida ?: %.2f\n", celsius);
			break;

		case 2:
			printf("\n--- Celsius para Fahrenheit ---\n");
			printf("Coloque a temperatura: ");
			scanf("%f", &celsius);
			fahr = (9 * celsius + 160) / 5;
			printf("A temperatura convertida ?: %.2f\n", fahr);
			break;

		case 3:
			printf("\n--- Celsius para Kelvin ---\n");
			printf("Coloque a temperatura: ");
			scanf("%f", &celsius);
			kelvin = celsius + 273;
			printf("A temperatura convertida ?: %.2f\n", kelvin);
			break;

		default:
			printf("--- Op??o Inv?lida!!! ---\n");
		}
		printf("\nDeseja continuar? \n[ S ] Sim / [ N ] Não");
		scanf(" %s", &resp);
	} while (resp == 's' || resp == 'S');

	return 0;
}
