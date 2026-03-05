#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // carta 1
  char estado1;
  char cod_carta1[5];
  char nome_cidade1[50];
  int pop_cidade1;
  float area_cidade1;
  float pib_cidade1;
  int pontos_turisticos1;

  // carta 2
  char estado2;
  char cod_carta2[5];
  char nome_cidade2[50];
  int pop_cidade2;
  float area_cidade2;
  float pib_cidade2;
  int pontos_turisticos2;

  // Área para entrada de dados carta 1
  printf("Digite os dados da carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", cod_carta1);
  printf("Digite o nome da cidade (ex: Porto Velho): ");
  scanf(" %[^\n]", nome_cidade1);
  printf("População: ");
  scanf("%d", &pop_cidade1);
  printf("Área (em km²): ");
  scanf("%f", &area_cidade1);
  printf("PIB (R$ em milhões): ");
  scanf("%f", &pib_cidade1);
  printf("Há quantos pontos turísticos? ");
  scanf("%d", &pontos_turisticos1);

  // Área para entrada de dados carta 2

  printf("\nDigite os dados da carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Código da Carta (ex: A02): ");
  scanf("%s", cod_carta2);
  printf("Digite o nome da cidade (ex: Manaus): ");
  scanf(" %[^\n]", nome_cidade2);
  printf("População: ");
  scanf("%d", &pop_cidade2);
  printf("Área (em km²): ");
  scanf("%f", &area_cidade2);
  printf("PIB (R$ em milhões): ");
  scanf("%f", &pib_cidade2);
  printf("Há quantos pontos turísticos? ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da carta: %s", cod_carta1);
  printf("Cidade: %s\n", nome_cidade1);
  printf("População: %d habitantes\n", pop_cidade1);
  printf("Área: %.2f km²\n", area_cidade1);
  printf("PIB: R$ %.2f milhões\n", pib_cidade1);
  printf("Pontos turísticos: %d\n\n", pontos_turisticos1);

  // Exibição dos dados da Carta 2

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %s\n", cod_carta2);
  printf("Cidade: %s\n", nome_cidade2);
  printf("População: %d habitantes\n", pop_cidade2);
  printf("Área: %.2f m²\n", area_cidade2);
  printf("PIB: R$ %.2f milhões\n", pib_cidade2);
  printf("Pontos turísticos: %d\n", pontos_turisticos2);

return 0;
} 
