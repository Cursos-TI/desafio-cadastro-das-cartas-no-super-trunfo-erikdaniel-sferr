#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira cidade
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    // Declaração das variáveis para a segunda cidade
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    printf("Cadastro de Cidades\n");
    printf("------------------\n");
    
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
    
    // Exibição dos dados da primeira cidade
    printf("\nInformacoes da Primeira Cidade:\n");
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    // Exibição dos dados da segunda cidade
    printf("\nInformacoes da Segunda Cidade:\n");
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    
    return 0;
}

/*By
    erikdaniel.sferr */