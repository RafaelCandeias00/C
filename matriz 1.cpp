#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int i, j, matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	for (i = 0; i < 3; i++){
		printf("\n");
		for (j = 0; j < 3; j++){
			printf("L[%d] C[%d] = [%d]\n", i, j, matriz[i][j]);
		}
	}
	printf("\n");
	printf("-----------------\n");
	printf("\n");
	for (i = 0; i < 3; i++){
		printf("|");
		for (j = 0; j < 3; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("|\n");
	}
}
