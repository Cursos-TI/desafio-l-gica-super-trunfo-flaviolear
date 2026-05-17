#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // ------ Variáveis Carta1 -------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int turistic1;
    float densidade1, percap1, superPoder1;

    //------ Variáveis Carta2 --------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int turistic2;
    float densidade2, percap2, superPoder2;

    //======= Entrada de Carta 1 =======
    printf("--- Cadastrar Carta 1 ---\n");
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
    printf("\n--- Cadastrar Carta 2 ---\n");
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

    // ===== Show Cards =====
    printf("\n--- Carta 1 ---\n");
    printf("Nome da Cidade: %s\n", cidade1);

    printf("--- Carta 2 ---\n");
    printf("Nome da Cidade: %s\n", cidade2);
    
    int escolha1, escolha2;

    printf("\n*** HORA DO DUELO ***\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Renda Percapita\n7. Super Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    
    // MENU 
    switch (escolha1) {
        case 1: printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Renda Percapita\n7. Super Poder\n"); break;
        case 2: printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Renda Percapita\n7. Super Poder\n"); break;
        case 3: printf("1. População\n2. Área\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Renda Percapita\n7. Super Poder\n"); break;
        case 4: printf("1. População\n2. Área\n3. PIB\n5. Densidade Demográfica\n6. Renda Percapita\n7. Super Poder\n"); break;
        case 5: printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n6. Renda Percapita\n7. Super Poder\n"); break;
        case 6: printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n7. Super Poder\n"); break;
        case 7: printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Renda Percapita\n"); break;
        default: printf("Opção inválida!\n");
    }
    printf("Sua escolha: ");
    scanf("%d", &escolha2);


    if (escolha1 == escolha2) {
        printf("\nErro: Você não pode escolher o mesmo atributo duas vezes!\n");
    }


    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    char *nome_atr1 = "", *nome_atr2 = "";


    switch (escolha1) {
        case 1: valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; nome_atr1 = "População"; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; nome_atr1 = "Área"; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; nome_atr1 = "PIB"; break;
        case 4: valor1_carta1 = (float)turistic1; valor1_carta2 = (float)turistic2; nome_atr1 = "Pontos Turísticos"; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; nome_atr1 = "Densidade Demográfica"; break;
        case 6: valor1_carta1 = percap1; valor1_carta2 = percap2; nome_atr1 = "Renda Percapita"; break;
        case 7: valor1_carta1 = superPoder1; valor1_carta2 = superPoder2; nome_atr1 = "Super Poder"; break;
    }

    switch (escolha2) {
        case 1: valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; nome_atr2 = "População"; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; nome_atr2 = "Área"; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; nome_atr2 = "PIB"; break;
        case 4: valor2_carta1 = (float)turistic1; valor2_carta2 = (float)turistic2; nome_atr2 = "Pontos Turísticos"; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; nome_atr2 = "Densidade Demográfica"; break;
        case 6: valor2_carta1 = percap1; valor2_carta2 = percap2; nome_atr2 = "Renda Percapita"; break;
        case 7: valor2_carta1 = superPoder1; valor2_carta2 = superPoder2; nome_atr2 = "Super Poder"; break;
    }

    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    char *vencedor = (soma_carta1 > soma_carta2) ? cidade1 : ((soma_carta2 > soma_carta1) ? cidade2 : "EMPATE!");

    // RESULTADO

    printf("         RESULTADO FINAL           \n");
  
    printf("Batalha: %s x %s\n\n", cidade1, cidade2);
    
    printf("-> %s:\n", nome_atr1);
    printf("%s: %.2f | %s: %.2f\n\n", cidade1, valor1_carta1, cidade2, valor1_carta2);
    
    printf("-> %s:\n", nome_atr2);
    printf("%s: %.2f | %s: %.2f\n\n", cidade1, valor2_carta1, cidade2, valor2_carta2);
    
    printf("-----------------------------------\n");
    printf("SOMA DOS ATRIBUTOS:\n");
    printf("%s: %.2f\n", cidade1, soma_carta1);
    printf("%s: %.2f\n", cidade2, soma_carta2);
    printf("\n*** VENCEDOR: %s ***\n", vencedor);
    printf("===================================\n");

    return 0;
}
