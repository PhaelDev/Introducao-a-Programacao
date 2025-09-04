#include <stdio.h>

int main (){

    int idade,matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: \n");
    fgets(nome,50,stdin);
    
    printf("digite a sua idade: \n");
    scanf("%d",&idade);

    printf("digite a sua matricula: \n");
    scanf("%d",&matricula);

    printf("digite sua altura: \n");
    scanf("%f",&altura);

    printf("-----------CADASTRO---------------\n");
    printf("NOME: %s", nome);
    printf("IDADE: %d \n", idade);
    printf("MATRICULA: %d \n", matricula);
    printf("ALTURA: %.2f \n", altura);
    printf("-----------CADASTRADO!------------");

    return 0;
}