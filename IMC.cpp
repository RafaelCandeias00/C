#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[15];
    float peso, massaCorporal, conversaoAltura, altura;

    printf("\n--- Índice de Massa Corporal (IMC) ---\n");
    printf("\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua altura (com vírgula): ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("------------------\n");

    massaCorporal = (peso / (pow(altura,2)));
    if (massaCorporal >= 0 && massaCorporal < 16){
        printf("%s, seu IMC é: %.2f - Baixo peso muito grave\n", nome, massaCorporal);
    }else if (massaCorporal >= 16 && massaCorporal < 16.99){
        printf("%s, seu IMC é: %.2f - Baixo peso grave\n", nome, massaCorporal);
    }else if (massaCorporal >= 17 && massaCorporal < 18.49){
        printf("%s, seu IMC é: %.2f - Baixo peso\n", nome, massaCorporal);
    }else if (massaCorporal >= 18.50 && massaCorporal < 24.99){
        printf("%s, seu IMC é: %.2f - Peso normal\n", nome, massaCorporal);
    }else if (massaCorporal >= 25 && massaCorporal < 29.99){
        printf("%s, seu IMC é: %.2f - Sobrepeso\n", nome, massaCorporal);
    }else if (massaCorporal >= 30 && massaCorporal < 34.99){
        printf("%s, seu IMC é: %.2f - Obesidade grau I\n", nome, massaCorporal);
    }else if (massaCorporal >= 35 && massaCorporal < 39.99){
        printf("%s, seu IMC é: %.2f - Obesidade grau II\n", nome, massaCorporal);
    }else if (massaCorporal >= 40){
        printf("%s, seu IMC é: %.2f - Obesidade grau III\n", nome, massaCorporal);
    }
}
