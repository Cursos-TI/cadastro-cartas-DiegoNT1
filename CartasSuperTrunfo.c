#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Variáveis carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //Variáveis carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  
  // Área para entrada de dados

  //Carta 1
  printf("Cadastro da Carta 1 \n");

  printf("Digite o estado (A a H): ");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta: Exemplo: A01: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf(" %d", &populacao1);

  printf("Digite a area: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d", &pontosTuristicos1);

  //Carta 2
  printf("\nCadastro da Carta 2 \n");

  printf("Digite o estado (A a H): Exemplo: A02: ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao: ");
  scanf(" %d", &populacao2);

  printf("Digite a area: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("\nCARTA 1 \n");
  printf("Estado: %c \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area: %f \n", area1);
  printf("PIB: %f de reais \n", pib1);
  printf("Pontos Turisticos: %d \n", pontosTuristicos1);

  printf("\nCARTA 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("Populacao: %d \n", populacao2);
  printf("Area: %f \n", area2);
  printf("PIB: %f de reais \n", pib2);
  printf("Pontos Turisticos: %d \n", pontosTuristicos2);
  
return 0;
} 
