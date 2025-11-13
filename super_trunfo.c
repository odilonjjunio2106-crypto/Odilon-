#include <stdio.h>

int main() {
    // Carta A
    char estadoA[] = "SP";
    char codigoA[] = "A01";
    char nomeA[] = "São Paulo";
    int populacaoA = 12325000;
    float areaA = 1521.11;
    float pibA = 699.28;
    int numPontosTuristicosA = 50;

    // Carta B
    char estadoB[] = "RJ";
    char codigoB[] = "B02";
    char nomeB[] = "Rio de Janeiro";
    int populacaoB = 6748000;
    float areaB = 1200.25;
    float pibB = 300.50;
    int numPontosTuristicosB = 30;

    // Exibir informações das cartas
    printf("=== Carta A ===\n");
    printf("Nome: %s\n", nomeA);
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("População: %d habitantes\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Pontos turísticos: %d\n\n", numPontosTuristicosA);

    printf("=== Carta B ===\n");
    printf("Nome: %s\n", nomeB);
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("População: %d habitantes\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Pontos turísticos: %d\n", numPontosTuristicosB);

    return 0;
}
