#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("--- MAIORIDADE ---\n");
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if(idade >= 18){
		printf("Você é MAIOR de idade!");
	}else{
		printf("Você é MENOR de idade!");
	}
}
