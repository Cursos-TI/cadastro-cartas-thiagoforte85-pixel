#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Aventureiro
int main() {
  printf("Desafio Super_Trufo_2025\n");

  printf("CARTA A:\n");


   char estadoA[50];
   char codigodacartaA[50];
   char nomedacidadeA[50];
   int populacaoA;
   float kmA;
   float pibA;
   int pontoA;

   printf("Digite o Estado:\n");
   fgets(estadoA, sizeof(estadoA), stdin);
 
   printf("Digite o Codigo da carta:\n");
   scanf("%s", codigodacartaA);

   printf("Digite o Nome da Cidade:\n");
   fgets(nomedacidadeA, sizeof(nomedacidadeA), stdin);
 
   printf("Digite a População:\n");
   scanf("%d", &populacaoA);

   printf("Digite o KM2:\n");
   scanf("%f", &kmA);

   printf("Digite o PIB:\n");
   scanf("%f", &pibA);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%d", &pontoA);
  
     
   printf("O Estado: %s \n", estadoA);
   printf("O Codigo da Carta: %s \n", codigodacartaA);
   printf("O Nome da Cidade: %s \n", nomedacidadeA);
   printf("A população: %d \n", populacaoA);
   printf("Área em km2: %f \n", kmA);
   printf("O PIB: %f \n", pibA);
   printf("Número de pontos turisticos: %d \n", pontoA);

   float Densidade_Pop_A = (float)populacaoA/kmA;
   printf("A Densidade Populacional é: %.2f\n",Densidade_Pop_A);

   float PIB_Capita_A = (float)pibA/(populacaoA/1000000);
   printf("O PIB per Capita é: %.2f\n",PIB_Capita_A);

   float SuperPoderA = populacaoA+kmA+pibA+Densidade_Pop_A+PIB_Capita_A+pontoA;
   printf("O Super Poder da Carta A é: %.2f\n",SuperPoderA);


   

printf("CARTA B:\n");

   char estadoB[50];
   char codigodacartaB[50];
   char nomedacidadeB[50 ];
   int populacaoB;
   float kmB;
   float pibB;
   int pontoB;
   


   printf("Digite o Estado:\n");
   fgets(estadoB, sizeof(estadoB), stdin);
   //estadoB[strcspn(estadoB, "\n")] = '\0'; // Remove o caractere de nova linha
 
   printf("Digite o Codigo da carta:\n");
   scanf("%s", codigodacartaB);

   printf("Digite o Nome da Cidade:\n");
   fgets(nomedacidadeB, sizeof(nomedacidadeB), stdin);
   //nomedacidadeB[strcspn(nomedacidadeB, "\n")] = '\0'; // Remove o caractere de nova linha

   printf("Digite a População:\n");
   scanf("%d", &populacaoB);

   printf("Digite o KM2:\n");
   scanf("%f", &kmB);

   printf("Digite o PIB:\n");
   scanf("%f", &pibB);

   printf("Digite o numero de pontos turisticos:\n");
   scanf("%d", &pontoB);
  
     
   printf("O Estado: %s \n", estadoB);
   printf("O Codigo da Carta: %s \n", codigodacartaB);
   printf("O Nome da Cidade: %s \n", nomedacidadeB);
   printf("A população: %d \n", populacaoB);
   printf("Área em km2: %f \n", kmB);
   printf("O PIB: %f \n", pibB);
   printf("Número de pontos turisticos: %d \n", pontoB);

   float Densidade_Pop_B = (float)populacaoB/kmB;
   printf("A Densidade Populacional é: %.2f\n",Densidade_Pop_B);

   float PIB_Capita_B = (float)pibB/(populacaoB/1000000);
   printf("O PIB per Capita é: %.2f\n",PIB_Capita_B);

   float SuperPoderB = populacaoB+kmB+pibB+Densidade_Pop_B+PIB_Capita_B+pontoB;
   printf("O Super Poder da Carta B é: %.2f\n",SuperPoderB);

   int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

   printf("Resultado da Batalha:\n");
   resultado1 = populacaoA> populacaoB;
   resultado2 = kmA> kmB;
   resultado3 = pibA> pibB;
   resultado4 = pontoA> pontoB;
   resultado5 = Densidade_Pop_A> Densidade_Pop_B;
   resultado6 = PIB_Capita_A> PIB_Capita_B;
   resultado7 = SuperPoderA> SuperPoderB;

   printf(" O Resultado 1 é: %d\n",resultado1);
   printf(" O Resultado 2 é: %d\n",resultado2);
   printf(" O Resultado 3 é: %d\n",resultado3);
   printf(" O Resultado 4 é: %d\n",resultado4);
   printf(" O Resultado 5 é: %d\n",resultado5);
   printf(" O Resultado 6 é: %d\n",resultado6);
   printf(" O Resultado 7 é: %d\n",resultado7);


   if(populacaoA > populacaoB) {
    printf("A Carta A ganhou: %d\n", populacaoA);
   } else{
    printf("A Carta B ganhou: %d\n", populacaoB);
   }

int cartaA, cartaB;

srand(time(0));

printf("Escolha uma Opção:\n");
printf("1. Popiulação\n");
printf("2. KM2\n");
printf("3. PIB\n");
printf("4. Número de pontos turisticos\n");
printf("Escolha\n");
scanf("%d", &cartaA);

switch (cartaA)
{
case 1:
   printf("Você escolheu População: %d\n", populacaoA);
   printf("Você escolheu População: %d\n", populacaoB);
   if (populacaoA>populacaoB)
   {
      printf("A Carta A ganhou!\n");
   }
   else if (populacaoB>populacaoA)
   {
      printf("A Carta B ganhou!\n");
   }
   
   break;
case 2:
   printf("Você escolheu KM2: %.2f\n", kmA);
   printf("Você escolheu KM2: %.2f\n", kmB);
   if (kmA>kmB)
   {
      printf("A Carta A ganhou!\n");
   }
   else if (kmB>kmA)
   {
      printf("A Carta B ganhou!\n");
   }
   break;
case 3:
   printf("Você escolheu PIB: %.2f\n", pibA);
   printf("Você escolheu PIB: %.2f\n", pibB);
   if (pibA>pibB)
   {
      printf("A Carta A ganhou!\n");
   }
   else if (pibB>pibA)
   {
      printf("A Carta B ganhou!\n");
   }
   break;
case 4:
   printf("Você escolheu Número de pontos turisticos: %d\n", pontoA);
   printf("Você escolheu Número de pontos turisticos: %d\n", pontoB);
   if (pontoA>pontoB)
   {
      printf("A Carta A ganhou!\n");
   }
   else if (pontoB>pontoA)
   {
      printf("A Carta B ganhou!\n");
   }
   break;
default:
   printf("Opção inválida!\n");
}






   return 0;

   }

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade