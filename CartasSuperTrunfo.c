#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codcarta1[4];
    char cidade1[50];
    int populacao1;
    float km1;
    float pib1;
    int pontostu1;

    // Variáveis da segunda carta
    char estado2;
    char codcarta2[4];
    char cidade2[50];
    int populacao2;
    float km2;
    float pib2;
    int pontostu2;

    // ================= CARTA 1 =================
    printf("Digite os dados da Primeira carta\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &km1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontostu1);

    // Gera o código automaticamente: letra do estado + 01
    codcarta1[0] = estado1;
    codcarta1[1] = '0';
    codcarta1[2] = '1';
    codcarta1[3] = '\0';

    // ================= CARTA 2 =================
    printf("\nDigite os dados da Segunda carta\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &km2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontostu2);

    // Gera o código automaticamente: letra do estado + 02
    codcarta2[0] = estado2;
    codcarta2[1] = '0';
    codcarta2[2] = '2';
    codcarta2[3] = '\0';

    // ================= RESULTADO =================
    printf("\n===== RESULTADO DAS CARTAS =====\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostu1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostu2);

    return 0;
}