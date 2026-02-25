#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    printf("--- Super Trunfo: Nível Mestre ---\n\n");

    // --- Cadastro da Carta 1 ---
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
    // Super Poder: Soma de todos os atributos (usando inverso da densidade)
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos1 + pib_per_capita1 + (1.0f / densidade1);

    printf("\n------------------------------\n");

    // --- Cadastro da Carta 2 ---
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // --- Comparação de Cartas ---
    printf("\n==============================\n");
    printf("    RESULTADO DA COMPARAÇÃO    \n");
    printf("==============================\n");

    /* Em C, resultados de comparações (>, <) retornam 1 para verdadeiro e 0 para falso */
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    // Regra especial: Densidade menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
