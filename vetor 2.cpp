#include <stdio.h>
#include <locale.h>
#define y 3

main(){
setlocale(LC_ALL, "Portuguese");
	
int x, soma, a[y], b[y];	

for(x=0;x<y;x++){
printf("\nDigite um valor para vetor A: ",x);
scanf("%i",&a[x]);
}

printf("\n----------------------------------\n");

for(x=0;x<y;x++){
printf("\nDigite um valor para vetor B: ",x);
scanf("%i",&b[x]);
}

for(x=0;x<y;x++){
	soma=a[x]+b[x];
	printf("\nValor final dos vetores %i: %i",x ,soma);
}
	
	return 0;
}
