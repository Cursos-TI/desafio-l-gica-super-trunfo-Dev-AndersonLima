#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para armazenar dados das cidades
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); // lê string com espaços
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("\n=== Comparação das Cartas ===\n");

    // Comparação da população
    if (populacao1 > populacao2) {
        printf("Maior população: %s (%d habitantes)\n", nome1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("Maior população: %s (%d habitantes)\n", nome2, populacao2);
    } else {
        printf("As cidades têm populações iguais (%d habitantes).\n", populacao1);
    }

    // Comparação da área
    if (area1 > area2) {
        printf("Maior área: %s (%.2f km²)\n", nome1, area1);
    } else if (area2 > area1) {
        printf("Maior área: %s (%.2f km²)\n", nome2, area2);
    } else {
        printf("As cidades têm áreas iguais (%.2f km²).\n", area1);
    }

    // Comparação do PIB
    if (pib1 > pib2) {
        printf("Maior PIB: %s (%.2f bilhões)\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("Maior PIB: %s (%.2f bilhões)\n", nome2, pib2);
    } else {
        printf("As cidades têm PIBs iguais (%.2f bilhões).\n", pib1);
    }

    // Definição de um "vencedor" (critério simples: soma das vitórias)
    int pontos1 = 0, pontos2 = 0;

    if (populacao1 > populacao2) pontos1++; else if (populacao2 > populacao1) pontos2++;
    if (area1 > area2) pontos1++; else if (area2 > area1) pontos2++;
    if (pib1 > pib2) pontos1++; else if (pib2 > pib1) pontos2++;

    printf("\n=== Resultado Final ===\n");
    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s (%d pontos)\n", nome1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("A cidade vencedora é: %s (%d pontos)\n", nome2, pontos2);
    } else {
        printf("Empate! Ambas as cidades têm %d pontos.\n", pontos1);
    }

    return 0;
}