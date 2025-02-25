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
   char codigo1[4];
   char nome1[50];
   int pop1;
   float area1;
   float pib1;
   int pontturist1;

 //Eu demorei muito tempo para entender como o "char".
 //Porém, depois de alguns dias de pesquisa eu consegui entender o suficiente pra fazer os codigos, de uma forma que não tivesse erros.

   /* Declaração para a Carta2 */
   char estado2;
   char codigo2[4];
   char nome2[50];
   int pop2;
   float area2;
   float pib2;
   int pontturist2;

 //Nessas pesquisas eu descobri as seguintes coisas abaixo, como o espaço antes do "%c", e o "[^n]"

   /* Entrada da Carta1 */
   printf("Insira os dados da Carta 1:\n");
   printf("Estado (A a H): ");
   scanf(" %c", &estado1); //o espaço antes do "%c" ignora espaços anteriores em branco 
   printf("Codigo da Carta (ex: A01): ");
   scanf("%s", codigo1);
   printf("Nome da Cidade: ");
   scanf(" %c[^\n]", nome1); //Lê a linha até encontrar '\n'
   printf("Populacao: ");
   scanf("%d", &pop1);
   printf("Area (em km²): ");
   scanf("%f", &area1);
   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib1);
   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontturist1);

   /* Entrada da Carta2 */
   printf("Insira os dados da Carta 1:\n");
   printf("Estado (A a H): ");
   scanf(" %c", &estado2);
   printf("Codigo da Carta (ex: A01): ");
   scanf("%s", codigo2);
   printf("Nome da Cidade: ");
   scanf(" %[^\n]", nome2);
   printf("Populacao: ");
   scanf("%d", &pop2);
   printf("Area (em km²): ");
   scanf("%f", &area2);
   printf("PIB (em bilhoes de reais): ");
   scanf("%f", &pib2);
   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontturist2);


    /* Exibição da Carta1 */
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nome1);
     printf("Populacao: %d\n", pop1);
     printf("Area: %.2f km²\n", area1);
     printf("PIB: %.2f bilhoes de reais\n", pib1);
     printf("Numero de Pontos Turisticos: %d\n", pontturist1);

    /* Exibição da Carta2 */
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontturist2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Eu não entendi muito bem como a sincronização funciona, pois em um dos videos aparece outro codespace, talvez eu tenha entendido errado.
    return 0;
} 