#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

  char Estado,Estado1;
  char  letra,letra1;
  char numero[03] , numero1[03];
  char cidade[50] , cidade1[50];
  int população , população1;
  float Área , Área1;
  float PIB , PIB1;
  int pontosTuristicos , pontosTuristicos1;
  float DensidadePopulacional , DensidadePopulacional1;
  float PibPerCapita , PibPerCapita1;


 // Área para entrada de dados
    /*  inicio */

   printf(" Super Trufo - Países:\n");

  printf("Vamos cadastrar as cartas jogador:\n");

  /* cadastramento das cartas*/
printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
  scanf(" %c", &Estado);

  printf("Digite o numero da carta:\n");
  scanf(" %s", &numero);

  printf("Digite o nome da Cidade:\n");
  scanf("%s", &cidade);

  printf("Digite numero de habitantes:\n");
  scanf("%d", &população);

  printf("Digite a área da cidade km²:\n");
  scanf("%f" , &Área);

   printf("Digite o PIB da cidade:\n");
   scanf("%f", &PIB);

   printf("Digite a quantidade  de pontos turisticos:\n");
   scanf("%d" , &pontosTuristicos);

 //comentario do game;

   printf("Parabéns jogador.\n");

   printf("carta cadastrada com sucesso.\n");

   printf("vamos continuar cadastramento das cartas?\n");

    printf("Digite os dados da próxima carta:\n");
    
   /* cadastramento das cartas*/

    printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
    scanf(" %c", &Estado1);

    printf("Digite o numero da carta:\n");
    scanf(" %s", &numero1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite numero de habitantes:\n");
    scanf("%d", &população1);

    printf("Digite a área da cidade km²:\n");
    scanf("%f" , &Área1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade  de pontos turisticos:\n");
    scanf("%d" , &pontosTuristicos1);


    // Área para exibição dos dados da cidade

   /* Dados do cadastro 1º carta.*/

   printf("***Primeira carta cadastrada***\n");

   printf("Número da carta: %s\n", numero);

   printf("Estado: %c\n", Estado);

   printf("Código: %c%s\n", Estado , numero);

   printf("Nome da cidade: %s\n", cidade);

   printf("População: %d\n", população);

   printf("Área: %.2f km²\n", Área);

   printf("PIB: %.2f bilhões de reais\n", PIB);

   printf("Pontos turísticos: %d\n", pontosTuristicos);
   
   
   //calculo da densidade populacional

   DensidadePopulacional = população/Área;
   printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

   //calculo do pib per capita

   PibPerCapita = PIB/população;
   printf("PIB per capita: %.2f reais\n", PibPerCapita);



   

   /* Dados do cadastro 2º carta.*/

   printf("***Segunda carta cadastrada***\n");

   printf("Número da carta: %s\n", numero1);

   printf("Estado: %c\n", Estado1);

   printf("Código: %c%s\n", Estado1 , numero1);

   printf("Nome da cidade: %s\n", cidade1);

   printf("População: %d\n", população1);

   printf("Área: %.2f km²\n", Área1);

   printf("PIB: %.2f bilhões de reais\n", PIB1);

   printf("Pontos turísticos: %d\n", pontosTuristicos1);

   //calculo da densidade populacional

    DensidadePopulacional = população1/Área1;
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

    //calculo do pib per capita

    PibPerCapita =PIB1/população1;
    printf("PIB per capita: %.2f reais\n", PibPerCapita);


   /*comentario do game*/

   printf("vamos continuar cadastramento das cartas?\n");

   printf("Digite os dados da próxima carta:\n");



return 0;
} 
