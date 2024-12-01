#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct city{
    char name[50];
    char country[50];
    int population;
} City;

int main() {
    City cities[3]; 

    for (int i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", cities[i].name);
        printf("Country> ");
        scanf("%s", cities[i].country);
        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    printf("Printing the three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}