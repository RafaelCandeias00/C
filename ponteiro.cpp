#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"Portuguese");

int x=10, *px;
float y=1.2, *py;

px=&x;
py=&y;

printf("O endereço de (x) x é: %x\n",&x);
printf("O endereço de (px) x é: %x\n",px);
printf("--------------------------------\n");
printf("O endereço de (y) y é: %x\n",&y);
printf("O endereço de (py) y é: %x\n",py);



	return 0;
}
