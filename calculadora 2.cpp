#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char opcao;
int calc, a, b; 

printf("\n--- Entre com os dados ---\n");
printf("Entre com o primeiro número: ");
scanf("%f", &a);
printf("Entre com o segundo número: ");
scanf("%f", &b);

printf("\n--- Escolha uma operação ---\n");
printf("[ + ] - Soma\n");
printf("[ - ] - Subtração\n");
printf("[ / ] - Divisão\n");
printf("[ * ] - Multiplicação\n");
scanf("%s", &opcao);
switch(opcao){
	case'+':
	printf("\n--- Você escolheu SOMA ---\n");
	calc = a + b;
	printf("O resultado da soma é: %d\n", calc);
	break;
	
	case'-':
	printf("\n--- Você escolheu SUBTRAÇÃO ---\n");
	calc = a - b;
	printf("O resultado da subtração é: %d\n", calc);
	break;
	
	case'/':
	printf("\n--- Você escolheu DIVISÃO ---\n");
	calc = a / b;
	printf("O resultado da divisão é: %d\n", calc);	
	break;
	
	case'*':
	printf("\n--- Você escolheu MULTIPLICAÇÃO ---\n");
	calc = a * b;
	printf("O resultado da multiplicação é: %d\n", calc);
	break;
	
	default:
	printf("Opção inexistente!\n");
}
	return 0;
}
