#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	
float a,b;

puts("Digite o primeiro número: ");
scanf("%f", &a);	
puts("Digite o segundo número: ");
scanf("%f", &b);

if(a>b){
	printf("\n%.2f é maior que %.2f", a,b);
}else if(b>a){
	printf("\n%.2f é maior que %.2f", b,a);
}else{
	printf("\n%.2f é igual a %.2f", b,a);
}
	return 0;
}
