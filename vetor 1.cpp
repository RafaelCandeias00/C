#include <stdio.h>
#include <locale.h>
#define x 6

main(){
setlocale(LC_ALL, "Portuguese");

int i, a[x];

for(i=0;i<=x;i++){
	printf("\nColoque o indice do vetor %d, do vetor A: ", i);
	scanf("%d", &a[i]);
	printf("A [%d] = %d\n", i, a[i]);
}

printf("-----------------");

for(i=0;i<=x;i++){
	printf("\nA [%d] = %d\n", i, a[i]);
}
	return 0;
}
