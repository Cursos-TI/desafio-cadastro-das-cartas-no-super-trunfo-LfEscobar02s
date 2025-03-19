#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// começo

 //Honestamente eu não tinha entendido muito bem o conteúdo.

int main() {
   /* Declaração da Carta1 */
   char estado1;
   char codigo1[4];        // Código: 3 caracteres + '\0'
   char nome1[50];         // Nome da cidade
   int populacao1;
   float area1;
   float pib1;             // PIB em bilhões de reais
   int pontosTuristicos1;
   float densidade1;       // Habitantes por km²
   float pibPerCapita1;    // PIB per capita em reais

   /* Declaração para a Carta2 */
   char estado2;
   char codigo2[4];
   char nome2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidade2;
   float pibPerCapita2;

   /* Entrada da Carta1 */
   printf("Insira os dados da Carta 1:\n");
   printf("Estado (A a H): ");
   scanf(" %c", &estado1);
   printf("Codigo da Carta (ex: A01): ");
   scanf("%s", codigo1);
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", nome1);
   printf("Populacao: ");
   scanf("%d", &populacao1);
   printf("Area (em km²): ");
   scanf("%f", &area1);
   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib1);
   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos1);

   /* Entrada da Carta2 */
   printf("\nInsira os dados da Carta 2:\n");
   printf("Estado (A a H): ");
   scanf(" %c", &estado2);
   printf("Codigo da Carta (ex: B02): ");
   scanf("%s", codigo2);
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", nome2);
   printf("Populacao: ");
   scanf("%d", &populacao2);
   printf("Area (em km²): ");
   scanf("%f", &area2);
   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);
   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontosTuristicos2);


    /* Cálculo dos novos atributos para Carta 1 */
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    /* Cálculo dos novos atributos para Carta 2 */
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
  
    /* Exibição da Carta1 */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    /* Exibição da Carta2 */
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
} 