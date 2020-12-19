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
	printf("\n--- %dº - Cadastro de Funcionário ---\n",i);
	
	
	printf("- Matrícula: ");
	scanf("%d",&dadosFunc[i].matricula);
	
	printf("- Nome do funcionário: ");
	scanf("%s",&dadosFunc[i].nome_func);
	fflush(stdin);
	
	printf("- Salário: R$");
	scanf("%f",&dadosFunc[i].salario);
	
	printf("- Nome da rua: ");
	scanf(" %s",&dadosFunc[i].nome_rua);
	
	printf("- Número da casa: nº");
	scanf("%d",&dadosFunc[i].num_casa);
}
printf("\n\n-----------\n\n");
for(i=1;i<tam;i++){
	printf("\tMatrícula: %d\n",dadosFunc[i].matricula);
	printf("\tNome do funcionário: %s\n",dadosFunc[i].nome_func);
	printf("\tSalário: %.2f\n",dadosFunc[i].salario);
	printf("\tNome da rua: %s\n",dadosFunc[i].nome_rua);
	printf("\tNúmero da casa: %d\n",dadosFunc[i].num_casa);
	printf("------------\n");
}
}
