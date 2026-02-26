#include <stdio.h>

int main()
{
    char estado1, estado2;
    int codigo1, codigo2;
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    unsigned long int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    double PIBperCapita1, PIBperCapita2;

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
    scanf(" %49[^\n]", nomeCidade1);

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
    if (area1 != 0)
        densidadePopulacional1 = populacao1 / area1;
    else
        densidadePopulacional1 = 0;

    // Calculo PIB per Capita
    if (populacao1 != 0)
        PIBperCapita1 = pib1 / populacao1;
    else
        PIBperCapita1 = 0;

    // Carta 2

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
    printf("\n");

    // Calculo da densidade populacional
    if (area2 != 0)
        densidadePopulacional2 = populacao2 / area2;
    else
        densidadePopulacional2 = 0;

    // Calculo PIB per Capita
    if (populacao2 != 0)
        PIBperCapita2 = pib2 / populacao2;
    else
        PIBperCapita2 = 0;

    printf("\n");
    
    printf("OPÇÕES \n");
    
    printf("1. População\n2. Área\n3. PIB\n4. Numero de pontos turísticos\n5. Densidade Populacional\n");
    
    
    printf("\n");
    
    printf("Escolha uma opção para comparar > ");
    
    int escolha;
    scanf("%d", &escolha);
    
    printf("\n");
    printf("Carta 1 > %s, Carta 2 > %s\n", nomeCidade1, nomeCidade2);
    printf("\n");

    switch (escolha)
    {
    case 1:
        printf("Atributo usado : População\n");
        printf("Valor da carta 1 > %lu, Valor da carta 2 > %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu !");
        }
        else if (populacao2 > populacao1)
        {
            printf("Carta 2 venceu !");
        }
        else
        {
            printf("Empate !");
        }
        break;
    case 2:
        printf("Atributo usado : Área\n");
        printf("Valor da carta 1 > %.2f, Valor da carta 2 > %.2f\n", area1, area2);
        if (area1 > area2)
        {
            printf("Carta 1 venceu !");
        }
        else if (area2 > area1)
        {
            printf("Carta 2 venceu !");
        }
        else
        {
            printf("Empate !");
        }
        break;
    case 3:
        printf("Atributo usado : PIB\n");
        printf("Valor da carta 1 > %.2f, Valor da carta 2 > %.2f\n", pib1, pib2);
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu !");
        }
        else if (pib2 > pib1)
        {
            printf("Carta 2 venceu !");
        }
        else
        {
            printf("Empate !");
        }
        break;
    case 4:
        printf("Atributo usado : Pontos turísticos\n");
        printf("Valor da carta 1 > %lu, Valor da carta 2 > %lu\n", pontosTuristicos1, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Carta 1 venceu !");
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Carta 2 venceu !");
        }
        else
        {
            printf("Empate !");
        }
        break;
    case 5:
        printf("Atributo usado : Densidade Populacional\n");
        printf("Valor da carta 1 > %.2f, Valor da carta 2 > %.2f\n", densidadePopulacional1, densidadePopulacional2);
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Carta 1 venceu !");
        }
        else if (densidadePopulacional2 > densidadePopulacional1)
        {
            printf("Carta 2 venceu !");
        }
        else
        {
            printf("Empate !");
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
}
