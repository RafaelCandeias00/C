#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	
float a,b;

puts("Digite o primeiro n�mero: ");
scanf("%f", &a);	
puts("Digite o segundo n�mero: ");
scanf("%f", &b);

if(a>b){
	printf("\n%.2f � maior que %.2f", a,b);
}else if(b>a){
	printf("\n%.2f � maior que %.2f", b,a);
}else{
	printf("\n%.2f � igual a %.2f", b,a);
}
	return 0;
}
