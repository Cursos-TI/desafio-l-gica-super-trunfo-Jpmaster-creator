#include <stdio.h>

int main()
{
    char estado1, estado2;
    char codigocarta1[4], codigocarta2[4];
    char nomecidade1[15], nomecidade2[15];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, capita1, capita2, inverso1, inverso2;
    float superpoder1, superpoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    int escolha;

    // Entrada de dados para a carta 1, inserida pelo usuario via teclado

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
    scanf(" %c", &estado2); // Foi necessario colocar um espaço atrás %c para limpar o buffer.

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

    // Calcula a densidade populacional.

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Calcula o Pib per capita.

    capita1 = (pib1 * 1000000000) / (float)populacao1;
    capita2 = (pib2 * 1000000000) / (float)populacao2;

    // Calcula o inverso da densidade.

    inverso1 = 1.0 / densidade1;
    inverso2 = 1.0 / densidade2;

    // Converçao explicita, e depois calcula a soma dos atributos para atribuir a variavel superpoder.

    superpoder1 = (float)populacao1 + area1 + pib1 + capita1 + densidade1 + inverso1 + (float)turistico1;
    superpoder2 = (float)populacao2 + area2 + pib2 + capita2 + densidade2 + inverso2 + (float)turistico2;

    printf("Suas cartas estão prontas!\n");

    // Resultado das cartas inseridas pelo usuario//

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
    // Menu que permite o usuario escolher qual atributo ele quer comparar
    printf("### Hora da Comparaçao! ###\n");
    printf("Escolha 1 atributo para comparaçao!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("=>");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (populacao1 == populacao2)
        {
            printf("Empate!");
        }
        else if (populacao1 > populacao2)
        {
            printf("A Carta => (%s) Possui => (%u)\n", nomecidade1, populacao1);
            printf("A Carta => (%s) Possui => (%u)\n", nomecidade2, populacao2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%u)\n", nomecidade1, populacao1);
            printf("A Carta => (%s) Possui => (%u)\n", nomecidade2, populacao2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;
    case 2:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (area1 == area2)
        {
            printf("Empate!");
        }
        else if (area1 > area2)
        {
            printf("A Carta => (%s) Possui => (%.2f km²)\n", nomecidade1, area1);
            printf("A Carta => (%s) Possui => (%.2f km²)\n", nomecidade2, area2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%.2f km²)\n", nomecidade1, area1);
            printf("A Carta => (%s) Possui => (%.2f km²)\n", nomecidade2, area2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;
    case 3:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (pib1 == pib2)
        {
            printf("Empate!");
        }
        else if (pib1 > pib2)
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, pib1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, pib2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, pib1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, pib2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;
    case 4:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (turistico1 == turistico2)
        {
            printf("Empate!");
        }
        else if (turistico1 > turistico2)
        {
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade1, turistico1);
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade2, turistico2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade1, turistico1);
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade2, turistico2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;
    case 5:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (densidade1 == densidade2)
        {
            printf("Empate!");
        }
        else if (densidade1 < densidade2)
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, densidade1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, densidade2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, densidade1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, densidade2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;
    case 6:
        // Caso os valores das variaveis seja igual, retorna na tela para o usuario empate.
        if (capita1 == capita2)
        {
            printf("Empate!");
        }
        else if (capita1 > capita2)
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, capita1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, capita2);
            printf("A Carta => (%s) Venceu!\n", nomecidade1);
        }
        else
        {
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, capita1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, capita2);
            printf("A Carta => (%s) Venceu!\n", nomecidade2);
        }
        break;

    default:
        // Se nenhuma opção válida for selecionada, informa que a escolha não é válida.
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
