#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char op;
int calc, a, b; 

printf("--- Entre com os dados ---\n");
printf("Entre com o primeiro n�mero: ");
scanf("%d", &a);
printf("Entre com o segundo n�mero: ");
scanf("%d", &b);

printf("\n--- Escolha uma opera��o ---\n");
printf("[ S ] - Soma\n");
printf("[ SUB ] - Subtra��o\n");
printf("[ D ] - Divis�o\n");
printf("[ M ] - Multiplica��o\n");
scanf("%s", &op);

if(op=='S'||op=='s'){
	printf("\n--- Voc� escolheu SOMA ---\n");
	calc = a + b;
	printf("O resultado da soma �: %d", calc);
}else if(op=='SUB'||op=='sub'){
	printf("\n--- Voc� escolheu SUBTRA��O ---\n");
	calc = a - b;
	printf("O resultado da subtra��o �: %d", calc);
}else if(op=='D'||op=='d'){
	printf("\n--- Voc� escolheu DIVIS�O ---\n");
	calc = a / b;
	printf("O resultado da divis�o �: %d", calc);
}else if(op=='M'||op=='m'){
	printf("\n--- Voc? escolheu MULTIPLICA��O ---\n");
	calc = a * b;
	printf("\nO resultado da multiplica��o �: %d", calc);
}else{
	printf("Op��o inexistente!\n");
}

	return 0;
}
