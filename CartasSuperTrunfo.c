#include <stdio.h>

int main() {
 
  // Declaração das variáveis das Cartas
  char estado1, estado2;
char codigo1[4], codigo2[4];
char nomeCidade1[50], nomeCidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosTuristicos1, pontosTuristicos2;

// Inclusão das variáveis Densidade populacional e PIB per capita
float Dpopulacional1, Dpopulacional2;
float Pibpcap1, Pibpcap2;

Dpopulacional1 = populacao1/area1;
Pibpcap1 = pib1/populacao1;

Dpopulacional2 = populacao2/area2;
Pibpcap2 = pib2/populacao2;


 // ---------- Entrada dos dados da Carta 1 ----------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);



    // ---------- Entrada dos dados da Carta 2 ----------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B03): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

 //      Exibição dos dados da cidade
 printf("\n--------- FICHA DA CARTA 1 ---------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %.2f hab/km²\n", Dpopulacional1);

    printf("\n--------- FICHA DA CARTA 2 ---------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);


return 0;
}