#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char op,resp;
int impar, par;

do{
printf("\n\n--- Escolha dos 10 primeiros n�meros �mpares ou pares ---\n");
printf("Deseja ver os n�meros �mpares ou pares?\n");
scanf(" %c",&op);
	
if(op=='i'||op=='I'){
	printf("\n--- 10 n�meros impares ---\n");
	for(impar=1;impar<=10;impar+=2){
	printf("%d\n",impar);
	}
}else if(op=='p'||op=='P'){
	printf("\n--- 10 n�meros pares ---\n");
	for(par=0;par<=10;par+=2){  
	printf("%d\n",par);
	}
}
	printf("Deseja continuar? [S] Sim");
	scanf(" %c",&resp);
}while(resp=='s'||resp=='S');

return 0;
}

