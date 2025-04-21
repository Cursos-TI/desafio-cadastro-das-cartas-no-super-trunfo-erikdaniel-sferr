#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira cidade
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;
    
    // Declaração das variáveis para a segunda cidade
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;
    
    printf("Cadastro de Cidades - Nivel Aventureiro\n");
    printf("--------------------------------------\n");
    
    // Entrada de dados para a primeira cidade
    printf("\nDados da Primeira Cidade\n");
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para a primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para unidades
    
    // Entrada de dados para a segunda cidade
    printf("\nDados da Segunda Cidade\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para unidades
    
    // Exibição dos dados da primeira cidade
    printf("\nInformacoes da Primeira Cidade:\n");
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    
    // Exibição dos dados da segunda cidade
    printf("\nInformacoes da Segunda Cidade:\n");
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    
    return 0;
}

/*By
    erikdaniel.sferr*/