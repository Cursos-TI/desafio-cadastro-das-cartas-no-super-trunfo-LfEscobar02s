#include <stdio.h>
#include <string.h>

// === Definição da estrutura Carta ===
typedef struct {
    char nome_pais[50];
    int populacao;             // em habitantes
    float area;                // em km²
    float pib;                 // em bilhões
    int pontos_turisticos;
    float densidade_demografica; // hab/km² (calculada)
} Carta;

// Retorna o valor do atributo escolhido como float
float getValor(const Carta *c, int opcao) {
    switch (opcao) {
        case 1: return (float)c->populacao;
        case 2: return c->area;
        case 3: return c->pib;
        case 4: return (float)c->pontos_turisticos;
        case 5: return c->densidade_demografica;
        default: return 0.0f;
    }
}

// Retorna o nome do atributo
const char* getNomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "";
    }
}

int main() {
    // === Cartas pré-cadastradas ===
    Carta carta1 = {"França",    67000000, 643801.0f, 2775.0f, 30, 0.0f};
    Carta carta2 = {"Alemanha",  83000000, 357386.0f, 3846.0f, 25, 0.0f};

    // Calcula densidade            população / área
    carta1.densidade_demografica = carta1.populacao / carta1.area;
    carta2.densidade_demografica = carta2.populacao / carta2.area;

    int escolha1 = 0, escolha2 = 0;

    // === Menu para a primeira escolha ===
    do {
        printf("Escolha o 1º atributo para comparar:\n");
        printf(" 1 - População\n");
        printf(" 2 - Área\n");
        printf(" 3 - PIB\n");
        printf(" 4 - Pontos Turísticos\n");
        printf(" 5 - Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > 5)
            printf("  → Opção inválida! Tente de novo.\n\n");
    } while (escolha1 < 1 || escolha1 > 5);

    // === Menu para a segunda escolha (exclui escolha1) ===
    do {
        printf("\nEscolha o 2º atributo (diferente de %s):\n",
               getNomeAtributo(escolha1));
        for (int i = 1; i <= 5; i++) {
            if (i == escolha1) continue;
            printf(" %d - %s\n", i, getNomeAtributo(i));
        }
        printf("Opção: ");
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1)
            printf("  → Opção inválida ou repetida! Tente de novo.\n");
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);

    // Obtém nomes e valores
    const char *nomeA1 = getNomeAtributo(escolha1);
    const char *nomeA2 = getNomeAtributo(escolha2);
    float v1_c1 = getValor(&carta1, escolha1);
    float v1_c2 = getValor(&carta2, escolha1);
    float v2_c1 = getValor(&carta1, escolha2);
    float v2_c2 = getValor(&carta2, escolha2);

    // === Comparações individuais ===
    int win1_attr1, win1_attr2;
    // para densidade (opção 5), menor vence:
    if (escolha1 == 5)
        win1_attr1 = (v1_c1 < v1_c2) ? 1 : (v1_c1 > v1_c2 ? 0 : -1);
    else
        win1_attr1 = (v1_c1 > v1_c2) ? 1 : (v1_c1 < v1_c2 ? 0 : -1);

    if (escolha2 == 5)
        win1_attr2 = (v2_c1 < v2_c2) ? 1 : (v2_c1 > v2_c2 ? 0 : -1);
    else
        win1_attr2 = (v2_c1 > v2_c2) ? 1 : (v2_c1 < v2_c2 ? 0 : -1);

    // === Soma dos valores brutos ===
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // === Exibição dos resultados ===
    printf("\n=== RESULTADO ===\n\n");
    printf("Atributos escolhidos: %s e %s\n\n", nomeA1, nomeA2);

    // Valores de cada atributo
    printf("%s:\n", nomeA1);
    printf("  %s = %.2f\n", carta1.nome_pais, v1_c1);
    printf("  %s = %.2f  →  %s\n\n",
           carta2.nome_pais, v1_c2,
           (win1_attr1 == 1) ? carta1.nome_pais
            : (win1_attr1 == 0) ? carta2.nome_pais
            : "Empate");

    printf("%s:\n", nomeA2);
    printf("  %s = %.2f\n", carta1.nome_pais, v2_c1);
    printf("  %s = %.2f  →  %s\n\n",
           carta2.nome_pais, v2_c2,
           (win1_attr2 == 1) ? carta1.nome_pais
            : (win1_attr2 == 0) ? carta2.nome_pais
            : "Empate");

    // Soma e vencedor final
    printf("Soma dos atributos:\n");
    printf("  %s = %.2f\n", carta1.nome_pais, soma1);
    printf("  %s = %.2f\n\n", carta2.nome_pais, soma2);

    if (soma1 > soma2)
        printf(">> VENCEDOR DA RODADA: %s!\n", carta1.nome_pais);
    else if (soma2 > soma1)
        printf(">> VENCEDOR DA RODADA: %s!\n", carta2.nome_pais);
    else
        printf(">> EMPATE NA RODADA!\n");

    return 0;
}
