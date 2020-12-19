#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");

float temp, calc;
char op; 

printf("\n--- Converter Temperatura ---\n");

printf("\nEscolha a op??o: (C) Celsius / (F) Faherenheit\n");
scanf(" %c", &op);

if(op=='C'||op=='c'){
	printf("\n--- Celsius para Faherenheit ---\n");
	for (temp = 0; temp<=100;temp++){
    calc=(9.0/5.0)*temp+32;
    printf("%.2fC = %.2fF\n", temp,calc);
	}
}else if(op=='F'||op=='f'){
	printf("\n--- Faherenheit para Celsius ---\n");
	for (temp = 0; temp<=100;temp++){
    calc=(5.0/9.0)*(temp-32);
    printf("%.2fF = %.2fC", temp,calc);
	}
}else 
	printf("Op??o Inv?lida");

return 0;
}
