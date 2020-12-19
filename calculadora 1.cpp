#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char op;
int calc, a, b; 

printf("--- Entre com os dados ---\n");
printf("Entre com o primeiro número: ");
scanf("%d", &a);
printf("Entre com o segundo número: ");
scanf("%d", &b);

printf("\n--- Escolha uma operação ---\n");
printf("[ S ] - Soma\n");
printf("[ SUB ] - Subtração\n");
printf("[ D ] - Divisão\n");
printf("[ M ] - Multiplicação\n");
scanf("%s", &op);

if(op=='S'||op=='s'){
	printf("\n--- Você escolheu SOMA ---\n");
	calc = a + b;
	printf("O resultado da soma é: %d", calc);
}else if(op=='SUB'||op=='sub'){
	printf("\n--- Você escolheu SUBTRAÇÃO ---\n");
	calc = a - b;
	printf("O resultado da subtração é: %d", calc);
}else if(op=='D'||op=='d'){
	printf("\n--- Você escolheu DIVISÃO ---\n");
	calc = a / b;
	printf("O resultado da divisão é: %d", calc);
}else if(op=='M'||op=='m'){
	printf("\n--- Voc? escolheu MULTIPLICAÇÃO ---\n");
	calc = a * b;
	printf("\nO resultado da multiplicação é: %d", calc);
}else{
	printf("Opção inexistente!\n");
}

	return 0;
}
