#include <stdio.h>
#include <locale.h>
#include "fun��es (exer 6).h" // Teria que criar um #inlcude para funcionar corretamente

main(){
setlocale(LC_ALL, "Portuguese");

int num_1, num_2, op, SOMA, SUB, MULTI, DIV;

printf("--- Calculadora com fun��es (Switch...Case) ---\n");
printf("\nDigite o primeiro valor: ");
scanf("%d",&num_1);
printf("Digite o segundo valor: ");
scanf("%d",&num_2);

printf("\n- Escolha uma das opera��es \n[1] Soma \n[2] Subtra��o \n[3] Multiplica��o \n[4] Divis�o\n");
printf("- Op��o escolhida foi: ");
scanf("%d",&op);

if(op == 1){
	printf("\n--- SOMA ---\n");
	SOMA = soma(num_1,num_2);
	printf("O resultado da SOMA �: %d", SOMA);
}else if(op == 2){
	printf("\n--- SUBTRA��O ---\n");
	SUB = sub(num_1,num_2);
	printf("O resultado da SUBTRA��O �: %d", SUB);
}else if(op == 3){
	printf("\n--- MULTIPLICA��O ---\n");
	MULTI = multi(num_1,num_2);
	printf("O resultado da MULTIPLICA��O �: %d", MULTI);
}else if(op == 4){
	printf("\n--- DIVIS�O ---\n");
	DIV = div(num_1,num_2);
	printf("O resultado da DIVIS�O �: %d", DIV);
}else{
	printf("\nOp��o Inexistente!");
}
}
