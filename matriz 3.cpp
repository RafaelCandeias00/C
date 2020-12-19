#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"Portuguese");

int i, j, x, y, matriz[i][j];

printf("\n--- Quantidade de linha e coluna digitado pelo usuário ---\n");

printf("\nDigite o número de linha (x) = ");
scanf("%d",&x);
printf("Digite o número de coluna (y) = ");
scanf("%d",&y);

for(i=0;i<x;i++){
	printf("\n");
	for(j=0;j<y;j++){
		printf("L[%d] C[%d] = ",i,j);
		scanf("%d",&matriz[i][j]);
	}
}

printf("\n--- Matriz %dx%d ---\n",x,y);
for(i=0;i<x;i++){
	printf("|");
	for(j=0;j<y;j++){
		printf(" %d ",matriz[i][j]);
	}
	printf("|\n");
}
	return 0;
}
