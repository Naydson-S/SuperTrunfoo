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
    float superPoder1, superPoder2;

    printf("----- SUPER TRUNFO -----\n");

    printf("\n");

    printf("-- Cadastro das cartas --\n");

    printf("\n");

    // Carta 1
    printf("<< CARTA 1 >> \n");

    printf("ESTADO > ");
    scanf(" %c", &estado1);

    printf("CODIGO DA CARTA > ");
    scanf("%d", &codigo1);

    printf("NOME DA CIDADE > ");
    scanf(" %[^\n]", nomeCidade1);

    printf("POPULACAO > ");
    scanf("%d", &populacao1);

    printf("AREA EM Km² > ");
    scanf("%f", &area1);

    printf("PIB > ");
    scanf("%lf", &pib1);

    printf("NUMERO DE PONTOS TURISTICOS > ");
    scanf("%lu", &pontosTuristicos1);
    printf("\n");

    // Calculo da densidade populacional
    densidadePopulacional1 = (double)populacao1 / area1;

    // Calculo PIB per Capita
    PIBperCapita1 = pib1 / (double)populacao1;

    // Super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1);

    // Carta 2

    printf("<< CARTA 2 >> \n");

    printf("ESTADO > ");
    scanf(" %c", &estado2);

    printf("CODIGO DA CARTA > ");
    scanf("%d", &codigo2);

    printf("NOME DA CIDADE > ");
    scanf(" %[^\n]", nomeCidade2);

    printf("POPULACAO > ");
    scanf("%d", &populacao2);

    printf("AREA EM Km² > ");
    scanf("%f", &area2);

    printf("PIB > ");
    scanf("%lf", &pib2);

    printf("NUMERO DE PONTOS TURISTICOS > ");
    scanf("%lu", &pontosTuristicos2);
    printf("\n");

    // Calculo da densidade populacional
    densidadePopulacional2 = (double)populacao2 / area2;

    // Calculo PIB per Capita
    PIBperCapita2 = pib2 / (double)populacao2;

    // Super poder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2);

    printf("--- CARTA 1: ----");
    printf("\n");
    printf("ESTADO : %c \n", estado1);
    printf("CODIGO : %d \n", codigo1);
    printf("NOME DA CIDADE : %s\n", nomeCidade1);
    printf("POPULACAO : %d\n", populacao1);
    printf("AREA : %.2f km2\n", area1);
    printf("PIB : %.2f\n", pib1);
    printf("NUMERO DE PONTOS TURISTICOS : %lu\n", pontosTuristicos1);
    printf("DENSIDADE POPULACIONAL : %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB PER CAPITA : %.2f reais \n", PIBperCapita1);
    printf("\n");

    printf("--- CARTA 2: ----");
    printf("\n");
    printf("ESTADO : %c \n", estado2);
    printf("CODIGO : %d \n", codigo2);
    printf("NOME DA CIDADE : %s\n", nomeCidade2);
    printf("POPULACAO : %d\n", populacao2);
    printf("AREA : %.2f km2\n", area2);
    printf("PIB : %.2f\n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS : %lu\n", pontosTuristicos2);
    printf("DENSIDADE POPULACIONAL : %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB PER CAPITA : %.2f reais \n", PIBperCapita2);
    printf("\n");

    printf("=== Comparacao de Cartas ===\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

}
