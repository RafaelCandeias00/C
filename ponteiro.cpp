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

printf("O endere�o de (x) x �: %x\n",&x);
printf("O endere�o de (px) x �: %x\n",px);
printf("--------------------------------\n");
printf("O endere�o de (y) y �: %x\n",&y);
printf("O endere�o de (py) y �: %x\n",py);



	return 0;
}
