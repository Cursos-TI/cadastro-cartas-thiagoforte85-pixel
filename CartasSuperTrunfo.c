#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super_Trufo_2025\n");

  printf("CARTA A:\n");


   char estado[50];
   char codigodacarta[50];
   char nomedacidade[50];
   float populacao;
   float km;
   float pib;
   int ponto;

   printf("Digite o Estado:\n");
   scanf("%s", estado);
 
   printf("Digite o Codigo da carta:\n");
   scanf("%s", codigodacarta);

   printf("Digite o Nome da Cidade:\n");
   scanf("%s", nomedacidade);

   printf("Digite a População:\n");
   scanf("%f", &populacao);

   printf("Digite o KM2:\n");
   scanf("%f", km);

   printf("Digite o PIB:\n");
   scanf("%f", pib);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%d", &ponto);
   
     
   printf("O Estado: %s \n", estado);
   printf("O Codigo da Carta: %s \n", codigodacarta);
   printf("O Nome da Cidade: %s \n", nomedacidade);
   printf("A população: %f \n", populacao);
   printf("Área em km2: %f \n", km);
   printf("O PIB: %f \n", pib);
   printf("Número de pontos turisticos: %d \n", ponto);



   

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
