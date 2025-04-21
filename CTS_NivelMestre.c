#include <stdio.h>

int main() {
    // Declaração das variáveis para as cidades (usando unsigned long int para população)
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    printf("Comparador de Cidades - Nivel Mestre\n");
    printf("-----------------------------------\n");
    
    // Entrada de dados para a primeira cidade
    printf("\nDados da Primeira Cidade\n");
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para a primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + 
                  pib_per_capita1 + (1/densidade1);
    
    // Entrada de dados para a segunda cidade
    printf("\nDados da Segunda Cidade\n");
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + 
                  pib_per_capita2 + (1/densidade2);
    
    // Exibição dos dados das cidades
    printf("\nInformacoes das Cidades:\n");
    printf("----------------------------------------\n");
    printf("Primeira Cidade:\n");
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\nSegunda Cidade:\n");
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação entre as cidades
    printf("\nResultado da Comparacao:\n");
    printf("----------------------------------------\n");
    printf("Populacao: Carta %d vence\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Area: Carta %d vence\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d vence\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d vence\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d vence (menor valor)\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d vence\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2);
    printf("Super Poder: Carta %d vence\n", (super_poder1 > super_poder2) ? 1 : 2);
    
    return 0;
}

/*By
    erikdaniel.sferr */