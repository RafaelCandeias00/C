#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char opcao;
int calc, a, b; 

printf("\n--- Entre com os dados ---\n");
printf("Entre com o primeiro n�mero: ");
scanf("%f", &a);
printf("Entre com o segundo n�mero: ");
scanf("%f", &b);

printf("\n--- Escolha uma opera��o ---\n");
printf("[ + ] - Soma\n");
printf("[ - ] - Subtra��o\n");
printf("[ / ] - Divis�o\n");
printf("[ * ] - Multiplica��o\n");
scanf("%s", &opcao);
switch(opcao){
	case'+':
	printf("\n--- Voc� escolheu SOMA ---\n");
	calc = a + b;
	printf("O resultado da soma �: %d\n", calc);
	break;
	
	case'-':
	printf("\n--- Voc� escolheu SUBTRA��O ---\n");
	calc = a - b;
	printf("O resultado da subtra��o �: %d\n", calc);
	break;
	
	case'/':
	printf("\n--- Voc� escolheu DIVIS�O ---\n");
	calc = a / b;
	printf("O resultado da divis�o �: %d\n", calc);	
	break;
	
	case'*':
	printf("\n--- Voc� escolheu MULTIPLICA��O ---\n");
	calc = a * b;
	printf("O resultado da multiplica��o �: %d\n", calc);
	break;
	
	default:
	printf("Op��o inexistente!\n");
}
	return 0;
}
