#include <stdio.h>


int main() {
    char estado1, estado2;
    char codigocarta1 [4], codigocarta2 [4];
    char nomecidade1 [15], nomecidade2 [15];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, capita1, capita2, inverso1, inverso2;
    float superpoder1, superpoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    
    // Entrada de dados pelo usuario via teclado //


    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf("%c", &estado1);

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta1);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", nomecidade1);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%u", &populacao1);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area1);
    
    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib1);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico1);

    printf("Agora vamos criar a segunda carta!\n");

    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf(" %c", &estado2);                                                             // Foi necessario colocar um espaço atrás da "%" por causa de uma anamolia da linguagem c que adiciona \n //

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta2);

    printf("Por favor, digite o nome da cidade escolhida, sem espaços: ");
    scanf("%s", nomecidade2);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%u", &populacao2);

    printf("Defina agora o tamanho da area da cidade: ");
    scanf("%f", &area2);

    printf("Escolha o PIB, referente a cidade: ");
    scanf("%f", &pib2);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico2);


    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    capita1 =  (pib1 * 1000000000) / (float) populacao1;
    capita2 =  (pib2 * 1000000000) / (float) populacao2;

    inverso1 = 1.0 / densidade1;
    inverso2 = 1.0 / densidade2;

    superpoder1 = (float) populacao1 + area1 + pib1 + capita1 + densidade1 + inverso1 + (float)turistico1;
    superpoder2 = (float) populacao2 + area2 + pib2 + capita2 + densidade2 + inverso2 + (float)turistico2;

    printf("Suas cartas estão prontas!\n");

    //Resultado das cartas inseridas pelo usuario//

    printf("Carta1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)densidade1);
    printf("PIB per Capita: %.2f Reais\n", (float)capita1);
    printf("Super Poder: %.2f\n", (float)superpoder1);

    printf("Carta2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)densidade2);
    printf("PIB per Capita: %.2f Reais\n", (float)capita2);
    printf("Super Poder: %.2f\n", (float)superpoder2);

    printf("Comparação das cartas!\n");
    printf("****    AVISO!!   ****\n");
    printf("O Atributo utilizado para comparação será população!!\n");

    if (populacao1 > populacao2)
    {
        printf("Carta 1 venceu!! (%s)\n", nomecidade1);
    } else
    {
        printf("Carta 2 venceu!! (%s)\n", nomecidade2);
    }

    return 0;
}
