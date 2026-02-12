#include <stdio.h> // biblioteca padrao de entrada e saida

int main() { 

    char Estado1[255], Cidade1[255], CodigCarta1[10];
    int pontos_turisticos1, populacao1;
    float area1, PIB1;

    printf("Vamos jogar Super Trunfo!\n");
    printf("Primeiro vamos comecar vendo os atributos da primeira carta!\n\n");

    printf("Digite o Estado da primeira carta!: ");
    fgets(Estado1, sizeof(Estado1), stdin);

    printf("Digite a Cidade da primeira carta!: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Digite o Codigo da Carta da primeira carta!: ");
    fgets(CodigCarta1, sizeof(CodigCarta1), stdin);

    printf("Digite a quantidade de populacao da primeira carta!: ");
    scanf("%lu", &populacao1); // unsigned long int

    printf("Digite a quantidade de pontos turisticos da primeira carta!: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o tamanho da area da primeira carta!: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da primeira carta!: ");
    scanf("%f", &PIB1);

    float Densidade_Populacional1 = (float)populacao1 / area1;
    float pib1_percapita = (PIB1 * 1000000) / (float)populacao1;

    float SuperPoder1 = (float)populacao1 + area1 + PIB1 + 
                        (float)pontos_turisticos1 + pib1_percapita + 
                        (1.0f / Densidade_Populacional1);


    // LIMPA O BUFFER
    while (getchar() != '\n');






    char Estado2[255], Cidade2[255], CodigCarta2[10];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, PIB2;

    printf("\nAgora os atributos da segunda carta!\n\n");

    printf("Digite o Estado da segunda carta!: ");
    fgets(Estado2, sizeof(Estado2), stdin);

    printf("Digite a Cidade da segunda carta!: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Digite o Codigo da segunda carta!: ");
    fgets(CodigCarta2, sizeof(CodigCarta2), stdin);

    printf("Digite a quantidade da populacao da segunda carta!: ");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos da segunda carta!: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o tamanho da area da segunda carta!: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da segunda carta!: ");
    scanf("%f", &PIB2);

    float Densidade_Populacional2 = (float)populacao2 / area2;
    float pib2_percapita = (PIB2 * 1000000) / (float)populacao2;

    float SuperPoder2 = (float)populacao2 + area2 + PIB2 + 
                         (float)pontos_turisticos2 + pib2_percapita + 
                         (1.0f / Densidade_Populacional2);



    printf("\n===== Comparacao das Cartas =====\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_Populacional1 < Densidade_Populacional2); // menor ganha
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib1_percapita > pib2_percapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}