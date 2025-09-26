#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


struct Carta {
    char estado;
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra): ");
    scanf(" %c", &carta1.estado);

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf("%s", carta1.cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área: ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra): ");
    scanf(" %c", &carta2.estado);

    printf("Código: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf("%s", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área: ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
