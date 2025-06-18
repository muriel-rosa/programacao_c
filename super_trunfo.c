#include <stdio.h>

int main(){

    //Declaração das variáveis
    char estado1, estado2;
    char cod1[10], cod2[10];
    char nome1[50], nome2[50];
    int popu1, popu2, turi1, turi2;
    float area1, area2, PIB1, PIB2;
    float densi1, densi2, pibcap1, pibcap2;

    //Cadastro da Carta 1
    printf("\n Cadastro Carta 1 ");
    printf("\nInsira o Estado: ");
    scanf(" %c", &estado1);
    printf("\nCodigo da carta: ");
    scanf("%s", cod1);
    printf("\nNome da Cidade: ");
    scanf("%s", nome1);
    printf("\nPopulacao: ");
    scanf("%d", &popu1);
    printf("\nArea: ");
    scanf("%f", &area1);
    printf("\nPIB: ");
    scanf("%f", &PIB1);
    printf("\nNumero de pontos turisticos: ");
    scanf("%d", &turi1);
    
    //Cadastro da Carta 2
    printf("\nCadastro da Carta 2");
    printf("\nInsira o Estado: ");
    scanf(" %c", &estado2);
    printf("\nCodigo da carta: ");
    scanf("%s", cod2);
    printf("\nNome da Cidade: ");
    scanf("%s", nome2);
    printf("\nPopulacao: ");
    scanf("%d", &popu2);
    printf("\nArea: ");
    scanf("%f", &area2);
    printf("\nPIB: ");
    scanf("%f", &PIB2);
    printf("\nNumero de pontos turisticos: ");
    scanf("%d", &turi2);

    //Cálculo da Densidade e do PIB per capita
    densi1 = (float) popu1 / area1;
    densi2 = (float) popu2 / area2;
    pibcap1 = (float) PIB1 / popu1;
    pibcap2 = (float) PIB2 / popu2;

    //Tranformação pib
    PIB1 /= 1000000000;
    PIB2 /= 1000000000;

    //Impressão da carta 1
    printf("\n Carta 1: ");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", cod1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulacao: %d", popu1);
    printf("\nArea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", PIB1);
    printf("\nNúmero de Pontos Turísticos: %d", turi1);
    printf("\nDensidade Populacional: %.2f hab/km²", densi1);
    printf("\nPIB per Capita: %.2f reais\n", pibcap1);

    //Impressão da carta 2
    printf("\n Carta 2: ");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", cod2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulacao: %d", popu2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", PIB2);
    printf("\nNúmero de Pontos Turísticos: %d", turi2);
    printf("\nDensidade Populacional: %.2f hab/km²", densi2);
    printf("\nPIB per Capital: %.2f reais", pibcap2);

return 0;

}
