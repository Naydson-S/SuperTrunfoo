#include <stdio.h>

int main()
{
    char estado1, estado2;
    int codigo1, codigo2;
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    unsigned long int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;

    printf("----- SUPER TRUNFO - DESAFIO FINAL -----\n\n");

    /* ================= CADASTRO CARTA 1 ================= */
    printf("<< CARTA 1 >> \n");

    printf("ESTADO > ");
    scanf(" %c", &estado1);

    printf("CODIGO DA CARTA > ");
    scanf("%d", &codigo1);

    printf("NOME DA CIDADE > ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("POPULACAO > ");
    scanf("%d", &populacao1);

    printf("AREA EM Km² > ");
    scanf("%f", &area1);

    printf("PIB > ");
    scanf("%lf", &pib1);

    printf("NUMERO DE PONTOS TURISTICOS > ");
    scanf("%lu", &pontosTuristicos1);

    densidadePopulacional1 = (area1 != 0) ? populacao1 / area1 : 0;
    PIBperCapita1 = (populacao1 != 0) ? pib1 / populacao1 : 0;

    printf("\n");

    /* ================= CADASTRO CARTA 2 ================= */
    printf("<< CARTA 2 >> \n");

    printf("ESTADO > ");
    scanf(" %c", &estado2);

    printf("CODIGO DA CARTA > ");
    scanf("%d", &codigo2);

    printf("NOME DA CIDADE > ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("POPULACAO > ");
    scanf("%d", &populacao2);

    printf("AREA EM Km² > ");
    scanf("%f", &area2);

    printf("PIB > ");
    scanf("%lf", &pib2);

    printf("NUMERO DE PONTOS TURISTICOS > ");
    scanf("%lu", &pontosTuristicos2);

    densidadePopulacional2 = (area2 != 0) ? populacao2 / area2 : 0;
    PIBperCapita2 = (populacao2 != 0) ? pib2 / populacao2 : 0;

    printf("\n");

    /* ================= ESCOLHA DOS ATRIBUTOS ================= */

    int atributo1, atributo2;
    double valor1_c1 = 0, valor1_c2 = 0;
    double valor2_c1 = 0, valor2_c2 = 0;
    char nomeAtributo1[50], nomeAtributo2[50];

    printf("=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha > ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            sprintf(nomeAtributo1, "População");
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            sprintf(nomeAtributo1, "Área");
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1_c1 = pontosTuristicos1;
            valor1_c2 = pontosTuristicos2;
            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_c1 = densidadePopulacional1;
            valor1_c2 = densidadePopulacional2;
            sprintf(nomeAtributo1, "Densidade Populacional");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    if (atributo1 != 1) printf("1. População\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Populacional\n");

    printf("Escolha > ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1)
    {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (atributo2)
    {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            sprintf(nomeAtributo2, "População");
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            sprintf(nomeAtributo2, "Área");
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2_c1 = pontosTuristicos1;
            valor2_c2 = pontosTuristicos2;
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_c1 = densidadePopulacional1;
            valor2_c2 = densidadePopulacional2;
            sprintf(nomeAtributo2, "Densidade Populacional");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    /* ================= COMPARAÇÃO ================= */

    double soma1 = valor1_c1 + valor2_c1;
    double soma2 = valor1_c2 + valor2_c2;

    printf("\n========== RESULTADO ==========\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n\n", nomeCidade2);

    printf("Atributo 1: %s\n", nomeAtributo1);
    printf("Carta 1: %.2lf | Carta 2: %.2lf\n\n", valor1_c1, valor1_c2);

    printf("Atributo 2: %s\n", nomeAtributo2);
    printf("Carta 1: %.2lf | Carta 2: %.2lf\n\n", valor2_c1, valor2_c2);

    printf("SOMA DOS ATRIBUTOS:\n");
    printf("Carta 1: %.2lf\n", soma1);
    printf("Carta 2: %.2lf\n\n", soma2);

    if (soma1 == soma2)
        printf("EMPATE!\n");
    else
        printf("%s venceu!\n", (soma1 > soma2) ? nomeCidade1 : nomeCidade2);

    return 0;
}
