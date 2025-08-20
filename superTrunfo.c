#include <stdio.h>

int main() {
    // Primeira carta
    char cardState1[2];
    char cardCode1[3];
    char finalCardCode1[4];
    char cityName1[60];
    unsigned long int populationQuantity1;
    int cityAttractionsQuantity1;
    float areaSize1;
    float cityGdp1;
    float populationDensity1;
    float GDPperCapita1;
    float superPoder1;

    printf("Informe o estado da carta de A a H (Carta 1): ");
    scanf("%1s", cardState1);

    printf("Informe o codigo da carta de 01 a 04 (Carta 1): ");
    scanf("%2s", cardCode1);
    sprintf(finalCardCode1, "%s%s", cardState1, cardCode1);

    printf("Informe o nome da cidade (Carta 1): ");
    scanf("%59s", cityName1);

    printf("Informe a quantidade de populacao (Carta 1): ");
    scanf("%lu", &populationQuantity1);

    printf("Informe a quantidade de pontos turisticos (Carta 1): ");
    scanf("%d", &cityAttractionsQuantity1);

    printf("Informe o tamanho da area em quilometros quadrados (Carta 1): ");
    scanf("%f", &areaSize1);

    printf("Informe o PIB da cidade (Carta 1): ");
    scanf("%f", &cityGdp1);

    populationDensity1 = populationQuantity1 / areaSize1;
    GDPperCapita1 = cityGdp1 / populationQuantity1;
    superPoder1 = (float)populationQuantity1 + areaSize1 + cityGdp1 + (float)cityAttractionsQuantity1 + GDPperCapita1 + (1.0f / populationDensity1);

    // Segunda carta
    char cardState2[2];
    char cardCode2[3];
    char finalCardCode2[4];
    char cityName2[60];
    unsigned long int populationQuantity2;
    int cityAttractionsQuantity2;
    float areaSize2;
    float cityGdp2;
    float populationDensity2;
    float GDPperCapita2;
    float superPoder2;

    printf("Informe o estado da carta de A a H (Carta 2): ");
    scanf("%1s", cardState2);

    printf("Informe o codigo da carta de 01 a 04 (Carta 2): ");
    scanf("%2s", cardCode2);
    sprintf(finalCardCode2, "%s%s", cardState2, cardCode2);

    printf("Informe o nome da cidade (Carta 2): ");
    scanf("%59s", cityName2);

    printf("Informe a quantidade de populacao (Carta 2): ");
    scanf("%lu", &populationQuantity2);

    printf("Informe a quantidade de pontos turisticos (Carta 2): ");
    scanf("%d", &cityAttractionsQuantity2);

    printf("Informe o tamanho da area em quilometros quadrados (Carta 2): ");
    scanf("%f", &areaSize2);

    printf("Informe o PIB da cidade (Carta 2): ");
    scanf("%f", &cityGdp2);

    populationDensity2 = populationQuantity2 / areaSize2;
    GDPperCapita2 = cityGdp2 / populationQuantity2;
    superPoder2 = (float)populationQuantity2 + areaSize2 + cityGdp2 + (float)cityAttractionsQuantity2 + GDPperCapita2 + (1.0f / populationDensity2);

    // Exibe os dados das cartas
    printf("\nCarta 1\n");
    printf("Estado da Carta: %s\n", cardState1);
    printf("Codigo da Carta: %s\n", finalCardCode1);
    printf("Nome da Cidade: %s\n", cityName1);
    printf("Quantidade de Populacao: %lu\n", populationQuantity1);
    printf("Quantidade de Pontos Turisticos: %d\n", cityAttractionsQuantity1);
    printf("Area (km/2): %.2f\n", areaSize1);
    printf("PIB da Cidade: %.2f\n", cityGdp1);
    printf("Densidade Populacional: %.2f\n", populationDensity1);
    printf("PIB per Capita: %.2f\n", GDPperCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2\n");
    printf("Estado da Carta: %s\n", cardState2);
    printf("Codigo da Carta: %s\n", finalCardCode2);
    printf("Nome da Cidade: %s\n", cityName2);
    printf("Quantidade de Populacao: %lu\n", populationQuantity2);
    printf("Quantidade de Pontos Turisticos: %d\n", cityAttractionsQuantity2);
    printf("Area (km/2): %.2f\n", areaSize2);
    printf("PIB da Cidade: %.2f\n", cityGdp2);
    printf("Densidade Populacional: %.2f\n", populationDensity2);
    printf("PIB per Capita: %.2f\n", GDPperCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparacao de Cartas: 1 = Verdadeiro e 0 = Falso\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populationQuantity1 > populationQuantity2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", areaSize1 > areaSize2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", cityGdp1 > cityGdp2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", cityAttractionsQuantity1 > cityAttractionsQuantity2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", populationDensity1 < populationDensity2 ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", GDPperCapita1 > GDPperCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}