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
		printf("Voc� � MAIOR de idade!");
	}else{
		printf("Voc� � MENOR de idade!");
	}
}
