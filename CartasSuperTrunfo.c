#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super_Trufo_2025\n");

  printf("CARTA A:\n");


   char estadoA[50];
   char codigodacartaA[50];
   char nomedacidadeA[50];
   float populacaoA;
   float kmA;
   float pibA;
   int pontoA;

   printf("Digite o Estado:\n");
   scanf("%s", estadoA);
 
   printf("Digite o Codigo da carta:\n");
   scanf("%s", codigodacartaA);

   printf("Digite o Nome da Cidade:\n");
   scanf("%s", nomedacidadeA);

   printf("Digite a População:\n");
   scanf("%f", &populacaoA);

   printf("Digite o KM2:\n");
   scanf("%f", kmA);

   printf("Digite o PIB:\n");
   scanf("%f", pibA);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%d", &pontoA);
   
     
   printf("O Estado: %s \n", estadoA);
   printf("O Codigo da Carta: %s \n", codigodacartaA);
   printf("O Nome da Cidade: %s \n", nomedacidadeA);
   printf("A população: %f \n", populacaoA);
   printf("Área em km2: %f \n", kmA);
   printf("O PIB: %f \n", pibA);
   printf("Número de pontos turisticos: %d \n", pontoA);

   

printf("CARTA B:\n");
   char estadoB[50];
   char codigodacartaB[50];
   char nomedacidadeB[50];
   float populacaoB;
   float kmB;
   float pibB;
   int pontoB;

   printf("Digite o Estado:\n");
   scanf("%s", estadoB);
 
   printf("Digite o Codigo da carta:\n");
   scanf("%s", codigodacartaB);

   printf("Digite o Nome da Cidade:\n");
   scanf("%s", nomedacidadeB);

   printf("Digite a População:\n");
   scanf("%f", &populacaoB);

   printf("Digite o KM2:\n");
   scanf("%f", kmB);

   printf("Digite o PIB:\n");
   scanf("%f", pibB);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%d", &pontoB);
   
     
   printf("O Estado: %s \n", estadoB);
   printf("O Codigo da Carta: %s \n", codigodacartaB);
   printf("O Nome da Cidade: %s \n", nomedacidadeB);
   printf("A população: %f \n", populacaoB);
   printf("Área em km2: %f \n", kmB);
   printf("O PIB: %f \n", pibB);
   printf("Número de pontos turisticos: %d \n", pontoB);

   return 0;

   }

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade