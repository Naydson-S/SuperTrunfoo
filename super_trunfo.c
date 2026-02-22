#include <stdio.h>

int main()
{
    char estado1, estado2;
    int codigo1, codigo2;
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;

    printf("----- SUPER TRUNFO -----\n");

    printf("\n");

    printf("-- Cadastro das cartas --\n");

    printf("\n");
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
    scanf("%d", &pontosTuristicos1);

    printf("\n");

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
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Calculo da densidade populacional
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    // Calculo PIB per Capita
    PIBperCapita1 = pib1 / (double)populacao1;
    PIBperCapita2 = pib2 / (double)populacao2;

    printf("--- CARTA 1: ----\n");
    printf("\n");
    printf("ESTADO : %c \n", estado1);
    printf("CODIGO : %d \n", codigo1);
    printf("NOME DA CIDADE : %s\n", nomeCidade1);
    printf("POPULACAO : %d\n", populacao1);
    printf("AREA : %.2f km²\n", area1);
    printf("PIB : %.2f\n", pib1);
    printf("NUMERO DE PONTOS TURISTICOS : %d\n", pontosTuristicos1);
    printf("DENSIDADE POPULACIONAL : %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB PER CAPITA : %.2f reais \n", PIBperCapita1);
    printf("\n");

    printf("--- CARTA 2:----\n");
    printf("\n");
    printf("ESTADO : %c \n", estado2);
    printf("CODIGO : %d \n", codigo2);
    printf("NOME DA CIDADE : %s\n", nomeCidade2);
    printf("POPULACAO : %d\n", populacao2);
    printf("AREA : %.2f km²\n", area2);
    printf("PIB : %.2f\n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS : %d\n", pontosTuristicos2);
    printf("DENSIDADE POPULACIONAL : %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB PER CAPITA : %.2f reais \n", PIBperCapita2);
    printf("\n");
}
