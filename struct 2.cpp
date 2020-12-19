#include <stdio.h>
#include <locale.h>
#define tam 3

struct ficha_endereco_func{
	int num_casa;
	char nome_rua[30];
};

struct ficha_func{
	int matricula;
	char nome_func[30];
	float salario;
	struct ficha_endereco_func endereco_func;
};

main(){
setlocale(LC_ALL, "Portuguese");

int i;
struct ficha_func dadosFunc[tam];

for(i=1;i<tam;i++){
printf("\n--- %dº - Cadastro de funcionário ---\n",i);

	printf("- Matrícula: ");
	scanf("%d",&dadosFunc[i].matricula);
	
	printf("- Nome do funcionário: ");
	scanf("%s",&dadosFunc[i].nome_func);
	fflush(stdin);
	
	printf("- Salário: R$");
	scanf("%f",&dadosFunc[i].salario);
	
	printf("- Nome da rua: ");
	scanf(" %s",&dadosFunc[i].endereco_func.nome_rua);
	
	printf("- Número da casa: nº");
	scanf("%d",&dadosFunc[i].endereco_func.num_casa);

}
printf("\n\n-----------\n\n");
for(i=1;i<tam;i++){
	printf("\tMatrícula: %d\n",dadosFunc[i].matricula);
	printf("\tNome do funcionário: %s\n",dadosFunc[i].nome_func);
	printf("\tSalário: %.2f\n",dadosFunc[i].salario);
	printf("\tNome da rua: %s\n",dadosFunc[i].endereco_func.nome_rua);
	printf("\tNúmero da casa: %d\n",dadosFunc[i].endereco_func.num_casa);
	printf("------------\n");
}

}
