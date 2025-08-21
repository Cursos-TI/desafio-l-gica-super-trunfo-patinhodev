#include <stdio.h>

int main () {

    char estado1[20]; "Rio de Janeiro";
    char codigo1[4]; "A01";
    char nomeCidade1[50];"Teresópolis";
    unsigned long int populacao1;"40000.0";
    float area1;"35000.0";
    float pib1;"10000.0";
    int pontosTuristicos1;"10";

    char estado2 [20]; "São Paulo";
    char codigo2[4]; "B02";
    char nomeCidade2[50]; "Campinas";
    unsigned long int populacao2; "70000";
    float area2; "45000.0";
    float pib2; "2000.0";
    int pontosTuristicos2; "30";

    printf("Cadastro da Carta1:\n");

    printf("Digite seu estado (A-H): ");
    scanf("%s", estado1);  

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta2:\n");

    printf("Digite seu estado (A-H): ");
    scanf(" %s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\n==CARTAS CADASTRADAS==\nsdsa]da\n");

    printf("\nCarta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    printf("\n== COMPARACAO DE CARTAS ==\n");

    
    int vPopulacao1 = populacao1 > populacao2;
    int vPopulacao2 = populacao2 > populacao1;
    printf("Populacao: %s (%d)\n", vPopulacao1 ? "Carta 1 venceu" : "Carta 2 venceu", vPopulacao1);

    int vArea1 = area1 > area2;
    int vArea2 = area2 > area1;
    printf("Area: %s (%d)\n", vArea1 ? "Carta 1 venceu" : "Carta 2 venceu", vArea1);

    
    int vPIB1 = pib1 > pib2;
    int vPIB2 = pib2 > pib1;
    printf("PIB: %s (%d)\n", vPIB1 ? "Carta 1 venceu" : "Carta 2 venceu", vPIB1);

    
    int vPontos1 = pontosTuristicos1 > pontosTuristicos2;
    int vPontos2 = pontosTuristicos2 > pontosTuristicos1;
    printf("Pontos Turisticos: %s (%d)\n", vPontos1 ? "Carta 1 venceu" : "Carta 2 venceu", vPontos1);

    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    int vDensidade1 = densidade1 > densidade2;
    printf("Densidade Populacional: %s (%d)\n", vDensidade1 ? "Carta 1 venceu" : "Carta 2 venceu", vDensidade1);

    
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    int vPibPerCapita1 = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: %s (%d)\n", vPibPerCapita1 ? "Carta 1 venceu" : "Carta 2 venceu", vPibPerCapita1);

    
    float superPoder1 = pontosTuristicos1 + pibPerCapita1;
    float superPoder2 = pontosTuristicos2 + pibPerCapita2;
    int vSuperPoder1 = superPoder1 > superPoder2;
    printf("Super Poder: %s (%d)\n", vSuperPoder1 ? "Carta 1 venceu" : "Carta 2 venceu", vSuperPoder1);

    return 0;
}
