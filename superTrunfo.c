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

    printf("Enter the card state picking from A to H (Card 1): ");
    scanf("%1s", cardState1);

    printf("Enter the card code picking from 01 to 04 (Card 1): ");
    scanf("%2s", cardCode1);
    sprintf(finalCardCode1, "%s%s", cardState1, cardCode1);

    printf("Enter the city name (Card 1): ");
    scanf("%59s", cityName1);

    printf("Enter the population quantity (Card 1): ");
    scanf("%lu", &populationQuantity1);

    printf("Enter the number of city attractions (Card 1): ");
    scanf("%d", &cityAttractionsQuantity1);

    printf("Enter the area size in square kilometers (Card 1): ");
    scanf("%f", &areaSize1);

    printf("Enter the city GDP (Card 1): ");
    scanf("%f", &cityGdp1);

    populationDensity1 = populationQuantity1 / areaSize1;
    GDPperCapita1 = cityGdp1 / populationQuantity1;

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

    printf("Enter the card state picking from A to H (Card 2): ");
    scanf("%1s", cardState2);

    printf("Enter the card code picking from 01 to 04 (Card 2): ");
    scanf("%2s", cardCode2);
    sprintf(finalCardCode2, "%s%s", cardState2, cardCode2);

    printf("Enter the city name (Card 2): ");
    scanf("%59s", cityName2);

    printf("Enter the population quantity (Card 2): ");
    scanf("%lu", &populationQuantity2);

    printf("Enter the number of city attractions (Card 2): ");
    scanf("%d", &cityAttractionsQuantity2);

    printf("Enter the area size in square kilometers (Card 2): ");
    scanf("%f", &areaSize2);

    printf("Enter the city GDP (Card 2): ");
    scanf("%f", &cityGdp2);

    populationDensity2 = populationQuantity2 / areaSize2;
    GDPperCapita2 = cityGdp2 / populationQuantity2;

    printf("\nCard State: %s\n", cardState1);
    printf("Card Code: %s\n", finalCardCode1);
    printf("City Name: %s\n", cityName1);
    printf("Population Quantity: %lu\n", populationQuantity1);
    printf("City Attractions Quantity: %d\n", cityAttractionsQuantity1);
    printf("Area Size (sq km): %.2f\n", areaSize1);
    printf("City GDP: %.2f\n\n", cityGdp1);
    printf("Population Density: %.2f\n", populationDensity1);
    printf("GDP per Capita: %.2f\n", GDPperCapita1);

    printf("\nCard State: %s\n", cardState2);
    printf("Card Code: %s\n", finalCardCode2);
    printf("City Name: %s\n", cityName2);
    printf("Population Quantity: %lu\n", populationQuantity2);
    printf("City Attractions Quantity: %d\n", cityAttractionsQuantity2);
    printf("Area Size (sq km): %.2f\n", areaSize2);
    printf("City GDP: %.2f\n", cityGdp2);    
    printf("Population Density: %.2f\n", populationDensity2);
    printf("GDP per Capita: %.2f\n", GDPperCapita2);
}