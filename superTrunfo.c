#include <stdio.h>

float DensidadePop(int hab, float area){
    return hab/area;
}

float CalculaPIB(float pib, int hab){
    return pib/hab;
}

int main (){

    char estado;
    char codigo[5];
    char nomeCidade[20];
    int habitantes,nPontosTuristicos;
    float area, pib;

    char estado2;
    char codigo2[5];
    char nomeCidade2[20];
    int habitantes2,nPontosTuristicos2;
    float area2, pib2;

    printf("----------------------------CARTA 01 ----------------------\n");
    printf("Digite a Letra do Estado: | A | B | C | D | E | F | G | H |\n");
    scanf("%c",&estado);
    getchar();

    printf("Digite o Codigo da Carta: | 01 | 02 | 03 | 04 |\n");
    fgets(codigo,5,stdin);

    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade,20,stdin);

    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&habitantes);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d",&nPontosTuristicos);

    printf("Digite a Area da cidade em Km:\n");
    scanf("%f",&area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("-----------------------------------------------------------\n");

    printf("----------------------------CARTA 02 ----------------------\n");
    printf("Digite a Letra do Estado: | A | B | C | D | E | F | G | H |\n");
    getchar();
    scanf("%c",&estado2);
    getchar();

    printf("Digite o Codigo da Carta: | 01 | 02 | 03 | 04 |\n");
    fgets(codigo2,5,stdin);

    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade2,20,stdin);

    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&habitantes2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d",&nPontosTuristicos2);

    printf("Digite a Area da cidade em Km:\n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("----------------------------------------------------------\n\n\n");

    printf("|---Carta 1 ----------------------------------|\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %c%s",estado,codigo);
    printf("Nome da Cidade: %s",nomeCidade);
    printf("População: %d\n",habitantes);
    printf("Area: %.2f km²\n",area);
    printf("PIB: %.2f bilhoes de reais\n",pib);
    printf("Pontos Turisticos: %d\n",nPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n",DensidadePop(habitantes,area));
    printf("PIB per Capita: %.2f reais\n",CalculaPIB(pib*1000000000,habitantes));
    printf("|---Carta 1 ----------------------------------|\n\n\n");

    printf("|---Carta 2 ----------------------------------|\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %c%s",estado2,codigo2);
    printf("Nome da Cidade: %s",nomeCidade2);
    printf("População: %d\n",habitantes2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: %.2f bilhoes de reais\n",pib2);
    printf("Pontos Turisticos: %d\n",nPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n",DensidadePop(habitantes2,area2));
    printf("PIB per Capita: %.2f reais\n",CalculaPIB(pib2*1000000000,habitantes2));
    printf("|---Carta 2 ----------------------------------|\n");

    return 0;
}