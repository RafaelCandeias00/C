#include <stdio.h>
#include <locale.h>
#define tam 2

struct ficha{
	int matricula, num_casa;
	char nome_func[30], nome_rua[30];
	float salario;
};

main(){
setlocale(LC_ALL, "Portuguese");

struct ficha dadosFunc[tam];
int i;

for(i=1;i<tam;i++){
	printf("\n--- %d� - Cadastro de Funcion�rio ---\n",i);
	
	
	printf("- Matr�cula: ");
	scanf("%d",&dadosFunc[i].matricula);
	
	printf("- Nome do funcion�rio: ");
	scanf("%s",&dadosFunc[i].nome_func);
	fflush(stdin);
	
	printf("- Sal�rio: R$");
	scanf("%f",&dadosFunc[i].salario);
	
	printf("- Nome da rua: ");
	scanf(" %s",&dadosFunc[i].nome_rua);
	
	printf("- N�mero da casa: n�");
	scanf("%d",&dadosFunc[i].num_casa);
}
printf("\n\n-----------\n\n");
for(i=1;i<tam;i++){
	printf("\tMatr�cula: %d\n",dadosFunc[i].matricula);
	printf("\tNome do funcion�rio: %s\n",dadosFunc[i].nome_func);
	printf("\tSal�rio: %.2f\n",dadosFunc[i].salario);
	printf("\tNome da rua: %s\n",dadosFunc[i].nome_rua);
	printf("\tN�mero da casa: %d\n",dadosFunc[i].num_casa);
	printf("------------\n");
}
}
