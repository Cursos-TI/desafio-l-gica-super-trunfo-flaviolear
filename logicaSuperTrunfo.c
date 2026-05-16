#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // ------ Variáveis Carta1 -------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // Atualizado para unsigned long int
    float area1;
    float pib1;
    int turistic1;
    float densidade1, percap1, superPoder1;

    //------ Variáveis Carta2 --------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // Atualizado para unsigned long int
    float area2;
    float pib2;
    int turistic2;
    float densidade2, percap2, superPoder2;

    // Área para entrada de dados
//======= Entrada de Carta 1 =======
    printf("Cadastrar Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &turistic1);

    densidade1 = (float) populacao1 / area1;
    percap1 = (float) pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) turistic1 + percap1 + (1.0f / densidade1);

    //============= Entrada de Carta 2 =================
    printf("Cadastrar Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &turistic2);

    densidade2 = (float) populacao2 / area2;
    percap2 = (float) pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) turistic2 + percap2 + (1.0f / densidade2);

  // Área para exibição dos dados da cidade

// ===== Show Cards=====
    printf("\n---Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n", turistic1);
    printf("Desidade Demográfica: %.2f", densidade1);
    printf("PIB Percapto: %.4f em reais", percap1);
    printf("Super Poder: %.2f\n", superPoder1);
    

    printf("\n---Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n", turistic2);
    printf("Desidade Demográfica: %.2f", densidade2);
    printf("PIB Percapto: %.4f em reais", percap2);
    printf("Super Poder: %.2f\n", superPoder2);

    int comparacao;

    printf("Escolha o que quer comparar nas cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turístico\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Percapta\n");
    printf("7. Super Poder\n");
    scanf("%d", &comparacao);

    

    switch (comparacao)
    {
    case 1:
        printf("Comparando População\n");
        printf("Carta 1: %lu | Carta 2: %lu \n", populacao1, populacao2);

        if (populacao1 > populacao2) {
            printf("Carta 01 Venceu!\n");
        } else if (populacao1 < populacao2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;

    case 2:
        printf("Comparando Área\n");
        printf("Carta 1: %f | Carta 2: %f\n", area1, area2);

        if (area1 > area2) {
            printf("Carta 01 Venceu!\n");
        } else if (area1 < area2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;
    
    case 3:
        printf("Comparando PIB\n");
        printf("Carta 1: %f | Carta 2: %f\n", pib1, pib2);

        if (pib1 > pib2) {
            printf("Carta 01 Venceu!\n");
        } else if (pib1 < pib2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;
    
    case 4:
        printf("Comparando Pontos Turísticos\n");
        printf("Carta 1: %d | Carta 2: %d\n", turistic1, turistic2);

        if (turistic1 > turistic2) {
            printf("Carta 01 Venceu!\n");
        } else if (turistic1 < turistic2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;

    case 5:
        printf("Comparando Desidade Demográfica\n");
        printf("Carta 1: %f | Carta 2: %f\n", densidade1, densidade2);

        if (densidade1 > densidade2) {
            printf("Carta 01 Venceu!\n");
        } else if (densidade1 < densidade2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;

    case 6:
        printf("Comparando Renda Percápta\n");
        printf("Carta 1: %f | Carta 2: %f\n", percap1, percap2);

        if (percap1 > percap2) {
            printf("Carta 01 Venceu!\n");
        } else if (percap1 < percap2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;

    case 7:
        printf("Comparando Super Poder\n");
        printf("Carta 1: %f | Carta 2: %f\n", superPoder1, superPoder2);

        if (superPoder1 > superPoder2) {
            printf("Carta 01 Venceu!\n");
        } else if (superPoder1 < superPoder2) {
            printf("Carta 02 Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
        break;

    default:
        break;
    }

return 0;
} 
