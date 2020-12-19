#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"Portuguese");

int i,j,matriz[3][3];

printf("--- Coloque os valores para matriz 3x3 ---\n");

for(i=0;i<3;i++){
	printf("\n");
	for(j=0;j<3;j++){
		printf("L[%d] C[%d] = ",i,j);
		scanf("%d",&matriz[i][j]);		
	}
}

printf("\n");
printf("---------------\n");
printf("\n");

for(i=0;i<3;i++){
	printf("|");
	for(j=0;j<3;j++){
		printf(" %d ",matriz[i][j]);
	}
	printf("|\n");
}

}
