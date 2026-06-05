#include <stdio.h>

int main() {
    // ===== CARTA 1: SÃO PAULO =====
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 748.7;
    int pontos1 = 50;
    
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ===== CARTA 2: RIO DE JANEIRO =====
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.33;
    float pib2 = 364.5;
    int pontos2 = 45;
    
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("=== SUPER TRUNFO: BATALHA DE CARTAS ===\n\n");

    printf("População: ");
    if (populacao1 > populacao2) {
        printf("%s venceu com %lu habitantes!\n", cidade1, populacao1);
    } else {
        printf("%s venceu com %lu habitantes!\n", cidade2, populacao2);
    }

    printf("Área: ");
    if (area1 > area2) {
        printf("%s venceu com %.2f km²!\n", cidade1, area1);
    } else {
        printf("%s venceu com %.2f km²!\n", cidade2, area2);
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("%s venceu com R$ %.2f bilhões!\n", cidade1, pib1);
    } else {
        printf("%s venceu com R$ %.2f bilhões!\n", cidade2, pib2);
    }

    printf("Densidade Demográfica: ");
    if (densidade1 < densidade2) {
        printf("%s venceu com %.2f hab/km²!\n", cidade1, densidade1);
    } else {
        printf("%s venceu com %.2f hab/km²!\n", cidade2, densidade2);
    }

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("%s venceu com R$ %.2f!\n", cidade1, pibPerCapita1);
    } else {
        printf("%s venceu com R$ %.2f!\n", cidade2, pibPerCapita2);
    }

    return 0;
}
