#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional
double calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
double calcularPIBPerCapita(double pib, unsigned long int populacao) {
    return pib / populacao;
}

// Função para calcular o super poder
float calcularSuperPoder(Carta c) {
    return (float)(
        c.populacao +
        c.area +
        c.pib +
        c.pontos_turisticos +
        c.pib_per_capita +
        (1.0 / c.densidade_populacional) // Inverso da densidade
    );
}

// Função para comparar dois valores, retorna 1 se c1 vence, 0 se c2 vence
int compararMaior(double a, double b) {
    return a > b ? 1 : 0;
}

// Para densidade, vence o menor valor
int compararMenor(double a, double b) {
    return a < b ? 1 : 0;
}

int main() {
    Carta c1, c2;

    // Entrada de dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf(" %[^\n]", c1.estado);
    printf("Código: "); scanf("%d", &c1.codigo);
    printf("Nome: "); scanf(" %[^\n]", c1.nome);
    printf("População: "); scanf("%lu", &c1.populacao);
    printf("Área (km²): "); scanf("%f", &c1.area);
    printf("PIB (em bilhões): "); scanf("%lf", &c1.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c1.pontos_turisticos);

    // Entrada de dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf(" %[^\n]", c2.estado);
    printf("Código: "); scanf("%d", &c2.codigo);
    printf("Nome: "); scanf(" %[^\n]", c2.nome);
    printf("População: "); scanf("%lu", &c2.populacao);
    printf("Área (km²): "); scanf("%f", &c2.area);
    printf("PIB (em bilhões): "); scanf("%lf", &c2.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c2.pontos_turisticos);

    // Cálculos
    c1.densidade_populacional = calcularDensidade(c1.populacao, c1.area);
    c2.densidade_populacional = calcularDensidade(c2.populacao, c2.area);

    c1.pib_per_capita = calcularPIBPerCapita(c1.pib, c1.populacao);
    c2.pib_per_capita = calcularPIBPerCapita(c2.pib, c2.populacao);

    c1.super_poder = calcularSuperPoder(c1);
    c2.super_poder = calcularSuperPoder(c2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", compararMaior(c1.populacao, c2.populacao));
    printf("Área: Carta 1 venceu (%d)\n", compararMaior(c1.area, c2.area));
    printf("PIB: Carta 1 venceu (%d)\n", compararMaior(c1.pib, c2.pib));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compararMaior(c1.pontos_turisticos, c2.pontos_turisticos));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compararMenor(c1.densidade_populacional, c2.densidade_populacional));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compararMaior(c1.pib_per_capita, c2.pib_per_capita));
    printf("Super Poder: Carta 1 venceu (%d)\n", compararMaior(c1.super_poder, c2.super_poder));


        // Utilizando if-else para comparar os PIBs
    if (carta1.pib > carta2.pib) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.pib > carta1.pib) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm o mesmo PIB.\n");
    }
    return 0;
}