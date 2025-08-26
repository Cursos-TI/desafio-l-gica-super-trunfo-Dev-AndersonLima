#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para armazenar dados
    char codigo [10], codigo2 [10];
    char nome1 [50], nome2 [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    // Cadastro primeira Carta:
    printf ("=== Cadastro da carta 1 ===\n");
    printf ("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf ("Digite o nome da cidade: ");
    scanf ("%[^\n]", nome1);

    printf ("Digite a população: ");
    scanf ("%d", &populacao1);

    printf ("Digite a área (em km²):");
    scanf ("%f", &area1);

    printf ("Digite o PIB: ");
    scanf("%f", &pib1);

    // Cadastro segunda Carta:
    printf ("=== Cadastro da carta 2 ===\n");
    printf ("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf ("Digite o nome da cidade: ");
    scanf ("%[^\n]", nome2);

    printf ("Digite a população: ");
    scanf ("%d", &populacao2);

    printf ("Digite a área (em km²):");
    scanf ("%f", &area2);

    printf ("Digite o PIB: ");
    scanf("%f", &pib2);

    printf ("\n=== Comparação das Cartas ===\n");

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
