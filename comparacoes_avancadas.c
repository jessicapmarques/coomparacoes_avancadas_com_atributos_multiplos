#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Variaveis da primeira carta
    char pais[20] = "Brasil";
    unsigned long int populacao = 1200;
    float area = 15000;
    float pib = 7000;
    int ponto_turistico = 50;
    float densidade_populacional;
    int primeiro_atributo;
    int resultado1;
    float soma_atributo1;
    char atributo_escolhido1[20];
    float atributo1_carta1;
    float atributo1_carta2;

    // Variaveis da segunda Carta
    char pais_2[20] = "Alemanha";
    unsigned long int populacao_2 = 13000;
    float area_2 = 1000;
    float pib_2 = 6000;
    int ponto_turistico_2 = 40;
    float densidade_populacional_2;
    int segundo_atributo;
    int resultado2;
    float soma_atributo2;
    char atributo_escolhido_2[30];
    float atributo2_carta1;
    float atributo2_carta2;
    
    

    densidade_populacional = populacao / area; // calculando densidade

    densidade_populacional_2 = populacao_2 / area_2; // Calculando densidade


    //menu primeiro
    printf("Bem-vindo ao jogo\n");
    printf("Escolha o primeiro atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &primeiro_atributo);   

    
    
    //menu segundo atributo
    printf("\nEscolha o segundo atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &segundo_atributo);  

    switch (primeiro_atributo)
    {
    case 1:
        resultado1 = populacao > populacao_2 ? 1 : 0 ;
        atributo1_carta1 = populacao;
        atributo1_carta2 = populacao_2;
        strcpy(atributo_escolhido1, "População");
        break;

    case 2:
        resultado1 = area > area_2 ? 1 : 0 ;
        atributo1_carta1 = area;
        atributo1_carta2 = area_2;
        strcpy(atributo_escolhido1, "Área");
        break;

    case 3:
        resultado1 = pib > pib_2 ? 1 : 0 ;
        atributo1_carta1 = area;
        atributo1_carta2 = area_2;
        strcpy(atributo_escolhido1, "PIB");
        break;

    case 4:
       resultado1 = ponto_turistico > ponto_turistico_2 ? 1 : 0 ;
       atributo1_carta1 = ponto_turistico;
       atributo1_carta2 = ponto_turistico_2;
       strcpy(atributo_escolhido1, "Ponto turistico");
       break;
    
    case 5:
       resultado1 = densidade_populacional < densidade_populacional_2 ? 1 : 0 ;
       atributo1_carta1 = densidade_populacional;
       atributo1_carta2 = densidade_populacional_2;
       strcpy(atributo_escolhido1, "Densidade");
       break;
    
    default:
        printf("Entrada inválida");
        break;
    }

    
    if (segundo_atributo == primeiro_atributo)
    {
        printf("Você escolheu o mesmo atributo, tente novamente!");

    } else{

    switch (segundo_atributo)
    {

    case 1:

        resultado2 = populacao > populacao_2 ? 1 : 0 ;
        atributo2_carta1 = populacao;
        atributo2_carta2 = populacao_2;
        strcpy(atributo_escolhido_2, "População");
        break;

    case 2:
        resultado2 = area > area_2 ? 1 : 0 ;
        atributo2_carta1 = area;
        atributo2_carta2 = area_2;
        strcpy(atributo_escolhido_2, "Área");
        break;

    case 3:
        resultado2 = pib > pib_2 ? 1 : 0 ;
        atributo2_carta1 = pib;
        atributo2_carta2 = pib_2;
        strcpy(atributo_escolhido_2, "Pib");
        break;

    case 4:
       resultado2 = ponto_turistico > ponto_turistico_2 ? 1 : 0 ;
       atributo2_carta1 = ponto_turistico;
       atributo2_carta2 = ponto_turistico_2;
       strcpy(atributo_escolhido_2, "Ponto turistico");
        break;
    
    case 5:
       resultado2 = densidade_populacional < densidade_populacional_2 ? 1 : 0 ;
       atributo2_carta1 = densidade_populacional;
       atributo2_carta2 = densidade_populacional_2;
       strcpy(atributo_escolhido_2, "Densidade Populacional");
       break;
    
    default:
        printf("Entrada inválida");
        break;
    }
  } 
    
    // 1. O nome dos dois países.
    printf("Países: %s e %s\n",pais, pais_2 );

    // 2. Os dois atributos usados na comparação.
    printf("Atributos usados: %s e %s\n", atributo_escolhido1, atributo_escolhido_2);

    // 3. Os valores de cada atributo para cada carta.
    printf("(Carta 1) %s - %s: %f / %s: %f \n(Carta 2) %s - %s: %f / %s: %f\n", pais, atributo_escolhido1, atributo1_carta1, atributo_escolhido_2, atributo1_carta2,  pais_2, atributo_escolhido1, atributo1_carta2, atributo_escolhido_2, atributo2_carta2);
   
    // 4. A soma dos atributos para cada carta.
    soma_atributo1 = atributo1_carta1 + atributo1_carta2;
    soma_atributo2 = atributo2_carta1 + atributo2_carta2;
    printf("Soma dos atributos: %s: %f / %s: %f\n", pais, soma_atributo1, pais_2, soma_atributo2);
    
    
    // 5. Qual carta venceu (ou se houve empate).

    if (resultado1 && resultado2)
    {
        printf("Carta 1 vence!\n");

    } else if (resultado1 != resultado2){
        printf("Empate\n");

    } else{
        printf("Carta 2 venceu!\n");

    }

    

    return 0;
}