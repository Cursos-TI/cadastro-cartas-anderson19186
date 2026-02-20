#include <stdio.h>
# include <stdlib.h>
#include <time.h>

int main(){

  char Estado,Estado1;
  char  letra,letra1;
  char numero[03] , numero1[03];
  char cidade[50] , cidade1[50];
  unsigned long int população , população1;
  float Área , Área1;
  float PIB , PIB1;
  int pontosTuristicos , pontosTuristicos1,atributo;
  float DensidadePopulacional , DensidadePopulacional1;
  float PibPerCapita , PibPerCapita1;
  float SuperPoder , SuperPoder1;    
 int carta1 , carta2;
  
                      /*  inicio */

      printf("#### Super Trufo - Países:####\n");

      printf("Vamos cadastrar as cartas jogador:\n");

                     /* cadastramento das cartas*/

      printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
      scanf(" %c", &Estado);
      

      printf("Digite o numero da carta:\n");
      scanf(" %s", &numero);

      printf("Digite o nome da Cidade:\n");
      scanf("%s", &cidade);

      printf("Digite numero de habitantes:\n");
      scanf("%lu", &população);

      printf("Digite a área da cidade km²:\n");
      scanf("%f" , &Área);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &PIB);

      printf("Digite a quantidade  de pontos turisticos:\n");
      scanf("%d" , &pontosTuristicos);

                        
                        //comentario do game;

      printf("Parabéns jogador.\n");

   
                       /* Dados do cadastro  carta.*/

      printf("***Primeira carta cadastrada***\n");

      printf("Número da carta: %s\n", numero);

      printf("Estado: %c\n", Estado);

      printf("Código: %c%s\n", Estado , numero);

      printf("Nome da cidade: %s\n", cidade);

      printf("População: %lu\n", população);

      printf("Área: %.2f km²\n", Área);

      printf("PIB: %.2f bilhões de reais\n", PIB);

      printf("Pontos turísticos: %d\n", pontosTuristicos);
   
   
                       //calculo da densidade populacional

      DensidadePopulacional = população/Área;
      printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

                      //calculo do pib per capita

      PibPerCapita = PIB/população;
      printf("PIB per capita: %.2f reais\n", PibPerCapita);

                        //calculo do super poder
      //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional –   
      // quanto menor a densidade, maior o "poder").
  
      SuperPoder = população +PIB +Área +pontosTuristicos + PibPerCapita + (1.0 / DensidadePopulacional);
      printf("Super Poder: %.2f\n", SuperPoder);


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
      scanf("%lu", &população1);

      printf("Digite a área da cidade km²:\n");
      scanf("%f" , &Área1);

      printf("Digite o PIB da cidade:\n");
      scanf("%f", &PIB1);

      printf("Digite a quantidade  de pontos turisticos:\n");
      scanf("%d" , &pontosTuristicos1);


                            /* Dados do cadastro 2º carta.*/

      printf("***Segunda carta cadastrada***\n");

      printf("Número da carta: %s\n", numero1);

      printf("Estado: %c\n", Estado1);

      printf("Código: %c%s\n", Estado1 , numero1);

      printf("Nome da cidade: %s\n", cidade1);

      printf("População: %lu\n", população1);

      printf("Área: %.2f km²\n", Área1);

      printf("PIB: %.2f bilhões de reais\n", PIB1);
      printf("Pontos turísticos: %d\n", pontosTuristicos1);

                              //calculo da densidade populacional

      DensidadePopulacional1 = população1/Área1;
      printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);

                              //calculo do pib per capita

      PibPerCapita1 =PIB1/população1;
      printf("PIB per capita: %.2f reais\n", PibPerCapita1);

                              //calculo do super poder
     //(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional –   
      // quanto menor a densidade, maior o "poder").

      SuperPoder1 = população1 +PIB1 +Área1 +pontosTuristicos1 + PibPerCapita1 + (1.0 / DensidadePopulacional1);
      printf("Super Poder: %.2f\n", SuperPoder1);


      //comparação entre as cartas cadastradas

      printf("####Comparação entre as cartas cadastradas:####\n");

      printf( "Escolha os Atributos \n");
      printf("1. população \n");
      printf("2. Área \n"); 
      printf("3. PIB \n"); 
      printf("4. Número de pontos turisticos \n"); 
      printf("5. Densidade demografica\n");
      scanf("%d" ,&atributo);

      switch (atributo)
            
      { 
     
        case 1:
            printf("Cidade %s vs %s \n",cidade,cidade1);
            printf("atributo população selecionado \n"); 
            if (população > população1){
        printf("Carta 1 venceu %s (população: %lu habitantes)\n", cidade, população);
        printf("Carta 2 perdeu %s (população:%lu habitantes)\n", cidade1,população1);
      }else if(população==população1){
            printf("Empatou");}
       else {
        printf("Carta 2 venceu %s (população: %lu habitantes)\n", cidade1, população1);}
        printf("Carta 1 perdeu %s (população: %lu habitantes)\n", cidade, população);     
        break;
        case 2:
        printf("Cidade %s vs %s \n",cidade,cidade1);
        printf("Atributo area Selecionado: \n");
        if (Área > Área1){
        printf("Carta 1 venceu %s (área: %.2f km²)\n", cidade, Área);
        printf("Carta 2 perdeu %s (área: %.2f km²)\n", cidade1, Área1);
      } else if(Área==Área1){
            printf("empatou");
      } 
      else {
        printf("Carta 2 venceu %s ( %.2f km²)\n", cidade1, Área1);
        printf("Carta 1 perdeu %s (área: %.2f km²)\n", cidade, Área);
      }

        break;
        case  3:
        printf("Cidade %s vs %s \n",cidade,cidade1);
        printf("Atributo  PIB selecionada \n");
         if(PIB > PIB1){
        printf("Carta 1 venceu %s (PIB: %.2f bilhões de reais)\n", cidade, PIB);
        printf("Carta 2 perdeu %s (PIB: %.2f bilhões de reais)\n", cidade1, PIB1);
      }  else if(PIB==PIB1){
            printf("empatou");}
      else {
        printf("Carta 2 venceu %s (PIB: %.2f bilhões de reais)\n", cidade1, PIB1);
        printf("Carta 1 perdeu %s (PIB: %.2f bilhões de reais)\n", cidade, PIB);
      } break;
        case 4 :
        printf("Cidade %s vs %s \n",cidade,cidade1);
        printf(" Atributo pontosTuristicos selecionado \n");
        if(pontosTuristicos > pontosTuristicos1){
        printf("Carta 1 venceu %s (pontos turísticos: %d)\n", cidade, pontosTuristicos);
        printf("Carta 2 perdeu %s (pontos turísticos: %d)\n", cidade1, pontosTuristicos1); 
      
      }  else if(pontosTuristicos==pontosTuristicos1){
            printf("empatou");}
      else {
        printf("Carta 2 venceu %s (pontos turísticos: %d)\n", cidade1, pontosTuristicos1);
        printf("Carta 1 perdeu %s (pontos turísticos: %d)\n", cidade, pontosTuristicos); 
      }
      break;
      case 5:
         printf("Cidade %s vs %s \n",cidade,cidade1);
         printf("Densidade Populacional \n");
         if(DensidadePopulacional < DensidadePopulacional1){
        printf("Carta 1 venceu %s (densidade populacional: %.2f hab/km²)\n", cidade, DensidadePopulacional);
        printf("Carta 2 perdeu %s (densidade populacional: %.2f hab/km²)\n", cidade1, DensidadePopulacional1);
      } else if(DensidadePopulacional==DensidadePopulacional1){
            printf("empatou");}
       else {
        printf("Carta 2 venceu %s (densidade populacional: %.2f hab/km²)\n", cidade1, DensidadePopulacional1);
         printf("Carta 1 perdeu %s (densidade populacional: %.2f hab/km²)\n", cidade, DensidadePopulacional);
      }
       break;
      default:
      printf("Opção invalida \n");
 
      
 
    }
}
      
                
      
     
