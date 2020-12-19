#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

char op,resp;
int impar, par;

do{
printf("\n\n--- Escolha dos 10 primeiros números ímpares ou pares ---\n");
printf("Deseja ver os números ímpares ou pares?\n");
scanf(" %c",&op);
	
if(op=='i'||op=='I'){
	printf("\n--- 10 números impares ---\n");
	for(impar=1;impar<=10;impar+=2){
	printf("%d\n",impar);
	}
}else if(op=='p'||op=='P'){
	printf("\n--- 10 números pares ---\n");
	for(par=0;par<=10;par+=2){  
	printf("%d\n",par);
	}
}
	printf("Deseja continuar? [S] Sim");
	scanf(" %c",&resp);
}while(resp=='s'||resp=='S');

return 0;
}

