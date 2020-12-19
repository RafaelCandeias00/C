#include <stdio.h>
#include <locale.h>
#include "funções (exer 6).h" // Teria que criar um #inlcude para funcionar corretamente

main(){
setlocale(LC_ALL, "Portuguese");

int num_1, num_2, op, SOMA, SUB, MULTI, DIV;

printf("--- Calculadora com funções (Switch...Case) ---\n");
printf("\nDigite o primeiro valor: ");
scanf("%d",&num_1);
printf("Digite o segundo valor: ");
scanf("%d",&num_2);

printf("\n- Escolha uma das operações \n[1] Soma \n[2] Subtração \n[3] Multiplicação \n[4] Divisão\n");
printf("- Opção escolhida foi: ");
scanf("%d",&op);

if(op == 1){
	printf("\n--- SOMA ---\n");
	SOMA = soma(num_1,num_2);
	printf("O resultado da SOMA é: %d", SOMA);
}else if(op == 2){
	printf("\n--- SUBTRAÇÃO ---\n");
	SUB = sub(num_1,num_2);
	printf("O resultado da SUBTRAÇÃO é: %d", SUB);
}else if(op == 3){
	printf("\n--- MULTIPLICAÇÃO ---\n");
	MULTI = multi(num_1,num_2);
	printf("O resultado da MULTIPLICAÇÃO é: %d", MULTI);
}else if(op == 4){
	printf("\n--- DIVISÃO ---\n");
	DIV = div(num_1,num_2);
	printf("O resultado da DIVISÃO é: %d", DIV);
}else{
	printf("\nOpção Inexistente!");
}
}
