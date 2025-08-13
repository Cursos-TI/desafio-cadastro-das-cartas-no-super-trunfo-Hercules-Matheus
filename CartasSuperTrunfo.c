#include <stdio.h>

int main() {
    char cardState[2];
    char cardCode[3];
    char finalCardCode[4];
    char cityName[60];
    int populationQuantity;
    int cityAttractionsQuantity;
    float areaSize;
    float cityGdp;

    printf("Enter the card state picking from A to H: ");
    scanf("%c", cardState);
    
    printf("Enter the card code picking from 01 to 04: ");
    scanf("%s", cardCode);
    sprintf(finalCardCode, "%s%s", cardState, cardCode);

    printf("Enter the city name: ");
    scanf("%s", cityName);

    printf("Enter the population quantity: ");
    scanf("%d", &populationQuantity);

    printf("Enter the number of city attractions: ");
    scanf("%d", &cityAttractionsQuantity);

    printf("Enter the area size in square kilometers: ");
    scanf("%f", &areaSize);

    printf("Enter the city GDP: ");
    scanf("%f", &cityGdp);

    printf("\nCard State: %s\n", cardState);
    printf("Card Code: %s\n", finalCardCode);
    printf("City Name: %s\n", cityName);
    printf("Population Quantity: %d\n", populationQuantity);
    printf("City Attractions Quantity: %d\n", cityAttractionsQuantity);
    printf("Area Size (sq km): %.2f\n", areaSize);
    printf("City GDP: %.2f\n", cityGdp);    
}    
