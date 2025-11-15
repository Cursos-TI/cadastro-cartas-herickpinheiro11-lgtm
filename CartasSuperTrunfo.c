#include <stdio.h>

int main() {
 
  // Declaração das variáveis das Cartas
  char estado1, estado2;
char codigo1[4], codigo2[4];
char nomeCidade1[50], nomeCidade2[50];
unsigned long int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosTuristicos1, pontosTuristicos2;

// Inclusão das variáveis Densidade populacional e PIB per capita
float Dpopulacional1, Dpopulacional2;
float Pibpcap1, Pibpcap2;

// Inclusão da variáveis de super poder
float super1, super2;


 // ---------- Entrada dos dados da Carta 1 ----------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

// Cálculos - Carta 1
   Dpopulacional1 = populacao1/area1;
   Pibpcap1 = (pib1 * 1000000000) / populacao1; // PIB em reais, não bilhões


    // ---------- Entrada dos dados da Carta 2 ----------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B03): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos - Carta 2
    Dpopulacional2 = populacao2/area2;
    Pibpcap2 = (pib2 * 1000000000) / populacao2;


      // Cálculo do Super Poder
    super1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + Pibpcap1 + (1 / Dpopulacional1);
    super2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + Pibpcap2 + (1 / Dpopulacional2);


     // Comparações

    int c_pop       = populacao1   > populacao2;
    int c_area      = area1  > area2;
    int c_pib       = pib1   > pib2;
    int c_pontos    = pontosTuristicos1 > pontosTuristicos2;
    int c_dens      = Dpopulacional1  < Dpopulacional2;   // menor vence
    int c_percap    = Pibpcap1 > Pibpcap2;
    int c_super     = super1 > super2;


 //      Exibição dos dados da cidade
 printf("\n--------- FICHA DA CARTA 1 ---------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Dpopulacional1);
    printf("PIB per Capita: %.2f reais\n", Pibpcap1);

    printf("\n--------- FICHA DA CARTA 2 ---------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Dpopulacional2);
    printf("PIB per Capita: %.2f reais\n", Pibpcap2);

    // Saída dos resultados

    printf("\n\nComparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", c_pop);
    printf("Área: Carta 1 venceu (%d)\n", c_area);
    printf("PIB: Carta 1 venceu (%d)\n", c_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", c_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c_dens);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c_percap);
    printf("Super Poder: Carta 1 venceu (%d)\n", c_super);

return 0;
}