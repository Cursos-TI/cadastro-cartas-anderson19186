#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
 char Estado;
  char  letra;
  char numero;
  char cidade[50];
  int população;
  float Área;
  float PIB;
  int pontosTuristicos;

/*  inicio */

   printf(" Super Trufo - Países:\n");

  printf("Vamos cadastrar as cartas jogador:\n");

  // Área para entrada de dados
  /*inicio do cadastramento das cartas*/

  printf("Digite o numero da carta:\n");
  scanf("  %c", &numero);

  printf("digite a letra da Cidade:\n");
  scanf(" %C",&letra);

  printf("Digite o nome da Cidade:\n");
  scanf("%s", &cidade);

  printf("digite numero de habitantes:\n");
  scanf("%d", &população);

  printf("digite a área da cidade km²:\n");
  scanf("%f" , &Área);

   printf("digite o PIB da cidade:\n");
   scanf("%f", &PIB);

   printf("digite a quantidade  de pontos turisticos:\n");
   scanf("%d" , &pontosTuristicos);

 //comentario do game;

   printf("Parabens jogador.\n");

   printf("carta cadastrada com sucesso.\n");

   /* Dados do cadastro 1º carta.*/
   

   /*comentario do game*/

printf("vamos continuar cadastramento das cartas?\n");

printf("Digite os dados da próxima carta:\n");


  


  // Área para exibição dos dados da cidade

return 0;
} 
