#include <stdio.h>
# include <stdlib.h>
#include <time.h>

int main(){

  char Estado,Estado1;
  int numero , numero1;
  char cidade[50] , cidade1[50];
  unsigned long int população , população1;
  float Área , Área1;
  float PIB , PIB1;
  int pontosTuristicos , pontosTuristicos1,atributo ,atributo1,resultado;
  float DensidadePopulacional , DensidadePopulacional1;
  float PibPerCapita , PibPerCapita1;
  float SuperPoder , SuperPoder1,soma_carta1,soma_carta2;    
  float valor1_carta1 , valor1_carta2,valor2_carta1 , valor2_carta2;
  
                      // inicio 

      printf("#### Super Trufo - Países:####\n");

      printf("Vamos cadastrar as cartas jogador:\n");

                     // cadastramento das cartas

      printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
      scanf("%c", &Estado);
      if ((Estado >= 'A' && Estado <= 'H') || (Estado >= 'a' && Estado <= 'h')) {
    
       } else {
       printf("Letra digitada errada. Digite uma letra de A até H ou a até h.\n");
       }

      
      printf("Digite o numero da carta:\n");
      scanf(" %d", &numero);
      if (numero >= 1 && numero <= 4){
       
      } else{
        printf("numero digitado errado digite numero de 1 a 4 \n");}

      
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

   
                       // Dados do cadastro  carta.

      printf("***Primeira carta cadastrada***\n");

      printf("Número da carta: %d\n", numero);

      printf("Estado: %c\n", Estado);

      printf("Código: %c%d\n", Estado , numero);

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
    
                      // cadastramento das cartas

      printf("Escolha uma letra de 'A' a 'H' para o Estado:\n");
      scanf(" %c", &Estado1);
      if ((Estado1 >= 'A' && Estado1 <= 'H') || (Estado1 >= 'a' && Estado1 <= 'h')) {
    
       } else {
       printf("Letra digitada errada. Digite uma letra de A até H ou a até h.\n");
       }

      printf("Digite o numero da carta:\n");
      scanf(" %d", &numero1);
       if (numero1 >= 1 && numero1 <= 4){
       
      } else{
        printf("numero digitado errado digite numero de 1 a 4 \n");}


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


                            // Dados do cadastro 2º carta.

      printf("***Segunda carta cadastrada***\n");

      printf("Número da carta: %d\n", numero1);

      printf("Estado: %c\n", Estado1);

      printf("Código: %c%d\n", Estado1 , numero1);

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
        
         printf( "Selecione o  primeiro Atributos \n");

         printf("1. população \n");
         printf("2. Área \n"); 
         printf("3. PIB \n"); 
         printf("4. Número de pontos turisticos \n"); 
         printf("5. Densidade demografica\n");
        scanf("%d" ,&atributo); 

         printf("Selecione segundo atributo \n ");

         printf("1. população \n");
         printf("2. Área \n"); 
         printf("3. PIB \n"); 
         printf("4. Número de pontos turisticos \n"); 
         printf("5. Densidade demografica\n");
         scanf("%d" ,&atributo1);  
         
         printf("####Atributos Selecionados para Combate#### \n");
               

        switch (atributo)
      {
         case 1:printf("População\n");
         valor1_carta1=população;valor1_carta2=população1;
         break;

        case 2:printf("Área \n");
        valor1_carta1=Área;valor1_carta2=Área1;
        break;
        
        case 3:printf("PIB\n");
        valor1_carta1=PIB;valor1_carta2=PIB1;
        break;

        case 4: printf("Número de pontos turisticos\n");
        valor1_carta1=pontosTuristicos;valor1_carta2=pontosTuristicos1;
        break;
      
        case 5:printf("Densidade demografica \n");
        valor1_carta1=DensidadePopulacional;valor1_carta2=DensidadePopulacional1;
        break;
       
        default:printf("opção invalida \n");break;
      }
       
        switch (atributo1)
      {
         case 1:printf("População\n");
         valor2_carta1=população;valor2_carta2=população1;
         break;

        case 2:printf("Área \n");
        valor2_carta1=Área;valor2_carta2=Área1;
        break;
        
        case 3:printf("PIB \n");
        valor2_carta1=PIB;valor2_carta2=PIB1;
        break;

        case 4: printf("Número de pontos turisticos \n");
        valor2_carta1=pontosTuristicos;valor2_carta2=pontosTuristicos1;
        break;
      
        case 5:printf("Densidade demografica \n");
        valor2_carta1=DensidadePopulacional;valor2_carta2=DensidadePopulacional1;
        break;
       
        default:printf("opção invalid \n");break;
      }
       resultado = atributo != atributo1 ? 1:0;
       if(resultado ==1 )
       {
       
          printf ("Os Atributos estão corretos \n");
        }else
        printf("valores de combate devem ser diferente\n");
        
           
          //Soma dos atributo da mesma carta.

         soma_carta1 = valor1_carta1 +valor2_carta1;
         soma_carta2 = valor1_carta2 +valor2_carta2;
         printf("Cidade  de:%s\n" , cidade);
         printf("%.2f \n",valor1_carta1);
         printf("%.2f \n",valor2_carta1);
         printf("Soma atributos: %.2f  \n",soma_carta1);
         printf("Cidade de: %s\n",cidade1);
         printf("%.2f \n",valor1_carta2);
         printf("%.2f \n",valor2_carta2);
         printf("Soma atributos %.2f \n",soma_carta2);
         
          //Resultado final.

         if(soma_carta1>soma_carta2){
         printf(" Parabéns Carta 1 Venceu! %s\n" ,cidade);
         }else if(soma_carta1<soma_carta2){
          printf("Carta 2 Venceu  %s\n" ,cidade1);
         }else{
          printf("empate");}
          return 0;
        }
