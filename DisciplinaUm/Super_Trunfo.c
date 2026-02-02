#include <stdio.h>//biblioteca padrao de entrada e saida

#include <stdlib.h>


int main() { 

    char Estado1[255], Cidade1[255], CodigCarta1[10];
    int populacao1, pontos_turisticos1;
    float area1, PIB1;

    printf("Vamos jogar Super Trunfo!\n");
    printf("Primeiro vamos começar vendo os atributos da primeira carta!\n");
    printf("\n");


    printf("Digite o Estado da primeira carta!: ");
    fgets(Estado1, sizeof(Estado1), stdin);// pegando os Dados com sgets q é pra strings(Arrays)
    printf("\n");

    printf("Digite a Cidade da primeira carta!: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    printf("\n");

    printf("Digite o Codigo da Carta da primeira carta!: ");
    fgets(CodigCarta1, sizeof(CodigCarta1), stdin);
    printf("\n");


    printf("Digite a quantidade de populacao da primeira carta!: ");
    scanf("%d", &populacao1);// pegando os Dados com scan q é pra Não arrays
    printf("\n");

    printf("Digite a quantidade de pontos turisticos da primeira carta!: ");
    scanf("%d", &pontos_turisticos1);// pegando os Dados com scan q é pra Não arrays
    printf("\n");


    printf("Digite o tamanho da area da primeira carta!: ");
    scanf("%f", &area1);// pegando os Dados com scan q é pra Não arrays
    printf("\n");

    printf("Digite a quantidade do PIB da primeira carta!: ");
    scanf("%f", &PIB1);// pegando os Dados com scan q é pra Não arrays
    printf("\n");


    float Densidade_Populacional1 = populacao1 / area1;
    float pib1_percapita1 = PIB1/populacao1;



 // Dados da segunda carta!
 
    char Estado2[255], Cidade2[255], CodigCarta2[10];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;


    printf("Agora os atributos da segunda carta!\n");

    while (getchar() != '\n'); //limpa o buffer do teclado
    printf("\n");

    printf("Digite o Estado da segunda carta!: ");
    fgets(Estado2, sizeof(Estado2), stdin);// pegando os Dados com sgets q é pra strings(Arrays)
    printf("\n");

    printf("Digite a Cidade da segunda carta!: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    printf("\n");

    printf("Digite o Codigo da segunda carta!: ");
    fgets(CodigCarta2, sizeof(CodigCarta2), stdin);
    printf("\n");


    printf("Digite a quantidade da populacao da segunda carta!: ");
    scanf("%d", &populacao2);// pegando os Dados com scan q é pra Não arrays
    printf("\n");

    printf("Digite a quantidade de pontos turisticos da segunda carta!: ");
    scanf("%d", &pontos_turisticos2);// pegando os Dados com scan q é pra Não arrays
    printf("\n");


    printf("Digite o tamanho da area da segunda carta!: ");
    scanf("%f", &area2);// pegando os Dados com scan q é pra Não arrays
    printf("\n");

    printf("Digite a quantidade do PIB da segunda carta!: ");
    scanf("%f", &PIB2);// pegando os Dados com scan q é pra Não arrays
    printf("\n");



    float Densidade_Populacional2 = populacao2 / area2;
    float pib2_percapita2 = PIB2/populacao2;


    /*Vou comparar pelos pontos turisticos*/
    if(pontos_turisticos1 > pontos_turisticos2){
        printf("A Carta Vencedora:\n");
        printf("Nome do Estado: %s\n", Estado1);
        printf("Nome da Cidade: %s\n", Cidade1);
        printf("Codigo da Carta: %s\n", CodigCarta1);
        printf("Quantidade da populacao:  %d\n", populacao1);
        printf("Quantidade de pontos turisticos:  %d\n", pontos_turisticos1);
        printf("Tamanho da area:  %.2f\n", area1);
        printf("Quantidade do PIB da primeira carta!:  %.2f\n", PIB1);
        printf("Densidade Populacional da primeira carta!:  %.2f\n", Densidade_Populacional1);
        printf("PIB per capita da primeira carta!:  %.2f\n", pib1_percapita1);
    }
    else if(pontos_turisticos1 < pontos_turisticos2){

        printf("A Carta Vencedora:\n");
        printf("Nome do Estado: %s\n", Estado2);
        printf("Nome da Cidade: %s\n", Cidade2);
        printf("Codigo da Carta: %s\n", CodigCarta2);
        printf("Quantidade da populacao: %d\n", populacao2);
        printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);
        printf("Tamanho da area: %.2f\n", area2);
        printf("Quantidade do PIB da primeira carta!: %.2f\n", PIB2);
        printf("Densidade Populacional da primeira carta!: %.2f\n", Densidade_Populacional2);
        printf("PIB per capita da primeira carta!: %.2f\n", pib2_percapita2);

    }
    else{
        printf("Os atributos comparados são iguais!\n");
    }
    
    return 0;
}