#include <stdio.h>
# include <stdlib.h>
#include <time.h>
int main(){

  char Estado,Estado1;
  int numero , numero1;
  char cidade[50] , cidade1[50];
  unsigned long int populacao , populacao1;
  float Area , Area1;
  float PIB , PIB1;
  int pontosTuristicos , pontosTuristicos1;
  float DensidadePopulacional , DensidadePopulacional1;
  float PibPerCapita , PibPerCapita1;
  float SuperPoder , SuperPoder1;    
  int carta1,carta2,combate,combate1;
  float valor1_carta1=0 , valor1_carta2 =0,valor2_carta1=0 , valor2_carta2=0;
  float soma_carta1 = 0, soma_carta2 = 0;
                     
                    /*  inicio */

      printf(" Super Trufo - Cidades:\n");

      printf("Vamos cadastrar as cartas jogador:\n");

                     /* cadastramento das cartas*/

      printf("Escolha uma letra de 'A' a 'H' ou 'a' a 'h' para o Estado:\n");
      scanf(" %c", &Estado);
      if ((Estado >= 'A' && Estado <= 'H') || (Estado >= 'a' && Estado <= 'h')) {
    
       } else {
       printf("Letra digitada errada. Digite uma letra de 'A' até 'H' ou 'a' até 'h'.\n");
       }
        
      printf("Digite o numero da carta:\n");
      scanf(" %d", &numero);
      if (numero >= 1 && numero <= 4){
       
      } else{
        printf("Numero digitado errado digite numero de 1 a 4 \n");}


      printf("Digite o nome da Cidade:\n");
      scanf("%s", &cidade);

      printf("Digite numero de habitantes:\n");
      scanf("%lu", &populacao);

      printf("Digite a área da cidade km²:\n");
      scanf("%f" , &Area);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &PIB);

      printf("Digite a quantidade  de pontos turisticos:\n");
      scanf("%d" , &pontosTuristicos);

                        //comentario do game;

      printf("Parabéns jogador.\n");

   
                       /* Dados do cadastro  carta.*/

      printf("***Primeira carta cadastrada***\n");

      printf("Número da carta: %d\n", numero);

      printf("Estado: %c\n", Estado);

      printf("Código: %c%d\n", Estado , numero);

      printf("Nome da cidade: %s\n", cidade);

      printf("População: %lu\n", populacao);

      printf("Área: %.2f km²\n", Area);

      printf("PIB: %.2f bilhões de reais\n", PIB);

      printf("Pontos turísticos: %d\n", pontosTuristicos);
   
   
                       //calculo da densidade populacional

      DensidadePopulacional = populacao/Area;
      printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

                      //calculo do pib per capita

      PibPerCapita = PIB/populacao;
      printf("PIB per capita: %.2f reais\n", PibPerCapita);

                        //calculo do super poder
      //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional –   
      // quanto menor a densidade, maior o "poder").
  
      SuperPoder = populacao +PIB +Area +pontosTuristicos + PibPerCapita + (1.0 / DensidadePopulacional);
      printf("Super Poder: %.2f\n", SuperPoder);


      printf("vamos continuar cadastramento das cartas?\n");

      printf("Digite os dados da próxima carta:\n");
    
                      /* cadastramento das cartas*/

      printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
      scanf(" %c", &Estado1);
      if ((Estado1 >= 'A' && Estado1 <= 'H') || (Estado1 >= 'a' && Estado1 <= 'h')) {
    
       } else {
       printf("Letra digitada errada. Digite uma letra de 'A' até 'H' ou 'a' até 'h'.\n");
       }

      printf("Digite o numero da carta:\n");
      scanf(" %d", &numero1);

      if (numero1 >= 1 && numero1 <= 4){
      } else{
        printf("Numero digitado errado digite numero de 1 a 4 \n");}

      printf("Digite o nome da Cidade:\n");
      scanf("%s", &cidade1);

      printf("Digite numero de habitantes:\n");
      scanf("%lu", &populacao1);

      printf("Digite a área da cidade km²:\n");
      scanf("%f" , &Area1);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &PIB1);

      printf("Digite a quantidade  de pontos turisticos:\n");
      scanf("%d" , &pontosTuristicos1);


                            /* Dados do cadastro 2º carta.*/

      printf("***Segunda carta cadastrada***\n");

      printf("Número da carta: %d\n", numero1);

      printf("Estado: %c\n", Estado1);

      printf("Código: %c%d\n", Estado1 , numero1);

      printf("Nome da cidade: %s\n", cidade1);

      printf("População: %lu\n", populacao1);

      printf("Área: %.2f km²\n", Area1);

      printf("PIB: %.2f bilhões de reais\n", PIB1);
      printf("Pontos turísticos: %d\n", pontosTuristicos1);

                              //calculo da densidade populacional

      DensidadePopulacional1 = populacao1/Area1;
      printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);

                              //calculo do pib per capita

      PibPerCapita1 =PIB1/populacao1;
      printf("PIB per capita: %.2f reais\n", PibPerCapita1);

                              //calculo do super poder
     //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional –   
      // quanto menor a densidade, maior o "poder").

      SuperPoder1 = populacao1 +PIB1 +Area1 +pontosTuristicos1 + PibPerCapita1 + (1.0 / DensidadePopulacional1);
      printf("Super Poder: %.2f\n", SuperPoder1);


      //comparação entre as cartas cadastradas

      printf("Hora do combate jogador:\n");

      printf("Escolha o primeiro atributo para combate");
      
      printf( "Selecine o  primeiro Atributos \n");
      printf("1. população \n");
      printf("2. Área \n"); 
      printf("3. PIB \n"); 
      printf("4. Número de pontos turisticos \n"); 
      printf("5. Densidade demografica\n");
      scanf("%d" ,&combate);
       
      // comparação do primeiro atributo selecionado.
      switch (combate)
      {
      case 1: printf(" Você escolheu  População. \n");
        carta1=populacao >populacao1 ? 1:0;
        valor1_carta1=populacao;valor1_carta2=populacao1;
      break;
      case 2:printf(" Você escolheu Area. \n");
        carta1=Area>Area1 ? 1:0;
        valor1_carta1=Area;valor1_carta2=Area1;

      break;
      case 3:printf(" Você escolheu PIB. \n");
         carta1 =PIB > PIB1 ? 1:0;
         valor1_carta1=PIB;valor1_carta2=PIB1;
      break;
      case 4:printf(" Você escolheu Numero de pontos Turisticos. \n");
         carta1= pontosTuristicos>pontosTuristicos1? 1:0;
         valor1_carta1=pontosTuristicos;valor1_carta2=pontosTuristicos1;
      break;
      case 5:printf(" Você escolheu Densidade Demografica.\n");
         carta1=DensidadePopulacional<DensidadePopulacional1 ? 1:0;
         valor1_carta1=DensidadePopulacional;valor1_carta2=DensidadePopulacional1;
      break;

        default:printf("opção invalida");
        break;
      }
        
       printf("Boa escolha jogador! \n" );
       printf("Escolha segundo atributo de combate. \n");
      
        
      printf("1. população \n");
      printf("2. Área \n"); 
      printf("3. PIB \n"); 
      printf("4. Número de pontos turisticos \n"); 
      printf("5. Densidade demografica\n");
      scanf("%d" ,&combate1);

      if (combate ==combate1){
        printf(" Os atributos de combate devem ser diferentes");
      }
        
      
         // comparação do segundo atributo selecionado.
      switch (combate1)
      {
      case 1: printf(" Você escolheu  População \n");
        carta2=populacao1 >populacao ? 1:0;
        valor2_carta1=populacao;valor2_carta2=populacao1;
      break;
      case 2:printf(" Você escolheu Area \n");
        carta2=Area1>Area ? 1:0;
        valor2_carta1=Area;valor2_carta2=Area1;
      break;
      case 3:printf(" Você escolheu PIB \n");
         carta2 =PIB1 > PIB ? 1:0;
         valor2_carta1=PIB;valor2_carta2=PIB1;
      break;
      case 4:printf(" Você escolheu Numero de pontos Turisticos, \n");
         carta2= pontosTuristicos1>pontosTuristicos? 1:0;
         valor2_carta1=pontosTuristicos;valor2_carta2=pontosTuristicos1;
      break;
      case 5:printf(" Você escolheu Densidade Demografica\n");
         carta2=DensidadePopulacional1<DensidadePopulacional ? 1:0;
         valor2_carta1=DensidadePopulacional;valor2_carta2=DensidadePopulacional1;
         break;
      
      break;

        default:printf("opção invalida");
        break;
      } 
       // soma atributos
         soma_carta1 = valor1_carta1 +valor2_carta1;
         soma_carta2 = valor1_carta2 +valor2_carta2;

         printf("Atributos de combate selecionados \n");
         printf("Hora do Combate\n");

         if ((carta1 && carta2)&&(soma_carta1>soma_carta2))  {
          printf("Parabéns carta 1 venceu %s!\n",cidade);
        } else if ((carta1 =! carta2)&&(soma_carta1=soma_carta2)){
          printf("Empatou!\n");
        }else{
          printf("Carta 2 vencêu %s \n",cidade1);
        }
        // Impressão de resultados.
         printf(" Cidade de:%s \n" ,cidade);
         printf("Pontos dos atributos:%d \n",carta1);
         printf("Soma atributos: %.2f  \n",soma_carta1);
         printf("Cidade de:%s \n" ,cidade1);
         printf("Pontos de atributos %d \n",carta2);
         printf("Soma atributos %.2f  \n",soma_carta2); 
         
         
         
        
    return 0;
  }
      

