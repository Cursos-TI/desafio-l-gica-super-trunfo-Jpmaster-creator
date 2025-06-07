#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char nomecidade1[16], nomecidade2[16];
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    float densidade1, densidade2, capita1, capita2, inverso1, inverso2, pib1, pib2, area1, area2;
    float superpoder1, superpoder2, soma1, soma2;
    float atributo1carta1, atributo1carta2, atributo2carta1, atributo2carta2;
    int primeiroAtributo, segundoAtributo;
    int vitorias_carta1 = 0; // Contador de vitórias para a carta 1
    int vitorias_carta2 = 0; // Contador de vitórias para a carta 2

    printf("====================================================\n");
    printf("                    CRIACAO DE CARTAS\n");
    printf("====================================================\n");

    // Entrada dos dados para a carta 1, inserida pelo usuario.
    printf("--- Carta 1 ---\n");
    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf("%c", &estado1);

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta1);

    printf("Por favor, digite o nome da cidade escolhida, sem espacos: ");
    scanf("%s", nomecidade1);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Defina agora o tamanho da area da cidade (em Km²): ");
    scanf("%f", &area1);

    printf("Escolha o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico1);

    printf("\n--- Carta 2 ---\n");
    printf("Por favor, digite a letra inicial do estado de sua escolha: ");
    scanf(" %c", &estado2); // Foi necessario colocar um espaco atras %c para limpar o buffer.

    printf("Por favor, insira a letra do estado seguida de um numero de 01 a 04 (exemplo: A01, B03): ");
    scanf("%s", codigocarta2);

    printf("Por favor, digite o nome da cidade escolhida, sem espacos: ");
    scanf("%s", nomecidade2);

    printf("Defina o numero de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Defina agora o tamanho da area da cidade (em Km²): ");
    scanf("%f", &area2);

    printf("Escolha o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Por ultimo, defina uma quantidade de pontos turisticos presentes na cidade: ");
    scanf("%d", &turistico2);

    // Calcula a densidade populacional.
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Calcula o Pib per capita (PIB em bilhoes * 1.000.000.000 para converter para Reais).
    capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // Calcula o inverso da densidade.
    inverso1 = 1.0 / densidade1;
    inverso2 = 1.0 / densidade2;

    // Calcula a soma dos atributos para atribuir a variavel superpoder.
    superpoder1 = (float)populacao1 + area1 + pib1 + capita1 + densidade1 + inverso1 + (float)turistico1;
    superpoder2 = (float)populacao2 + area2 + pib2 + capita2 + densidade2 + inverso2 + (float)turistico2;

    printf("\nSuas cartas estao prontas!\n");

    // Resultado das cartas inseridas pelo usuario.
    printf("\n----------Carta1----------\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", capita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n----------Carta2----------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", capita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Menu que permite o usuario escolher qual atributo ele quer comparar.
    printf("\n====================================================\n");
    printf("                    Hora da Comparacao\n");
    printf("====================================================\n");
    printf("Escolha o primeiro atributo para comparacao!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Populacional (menor densidade vence)\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder (soma de todos os atributos)\n"); // Decidi adicionar o super poder para comparação.
    printf("=> ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("==========POPULACAO==========\n");
        printf("A Carta => (%s) Possui => (%lu)\n", nomecidade1, populacao1);
        printf("A Carta => (%s) Possui => (%lu)\n", nomecidade2, populacao2);
        atributo1carta1 = (float)populacao1;
        atributo1carta2 = (float)populacao2;
        if (populacao1 > populacao2)
            vitorias_carta1++;
        else if (populacao2 > populacao1)
            vitorias_carta2++;
        break;
    case 2:
        printf("==========AREA==========\n");
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, area1);
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, area2);
        atributo1carta1 = area1;
        atributo1carta2 = area2;
        if (area1 > area2)
            vitorias_carta1++;
        else if (area2 > area1)
            vitorias_carta2++;
        break;
    case 3:
        printf("==========PIB==========\n");
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, pib1);
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, pib2);
        atributo1carta1 = pib1;
        atributo1carta2 = pib2;
        if (pib1 > pib2)
            vitorias_carta1++;
        else if (pib2 > pib1)
            vitorias_carta2++;
        break;
    case 4:
        printf("==========PONTOS TURISTICOS==========\n");
        printf("A Carta => (%s) Possui => (%d)\n", nomecidade1, turistico1);
        printf("A Carta => (%s) Possui => (%d)\n", nomecidade2, turistico2);
        atributo1carta1 = (float)turistico1;
        atributo1carta2 = (float)turistico2;
        if (turistico1 > turistico2)
            vitorias_carta1++;
        else if (turistico2 > turistico1)
            vitorias_carta2++;
        break;
    case 5:
        printf("==========DENSIDADE POPULACIONAL==========\n");
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, densidade1);
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, densidade2);
        atributo1carta1 = densidade1;
        atributo1carta2 = densidade2;
        if (densidade1 < densidade2)
            vitorias_carta1++;
        else if (densidade2 < densidade1)
            vitorias_carta2++;
        printf("OBS: A menor densidade vence!\n");
        break;
    case 6:
        printf("==========PIB PER CAPITA==========\n");
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, capita1);
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, capita2);
        atributo1carta1 = capita1;
        atributo1carta2 = capita2;
        if (capita1 > capita2)
            vitorias_carta1++;
        else if (capita2 > capita1)
            vitorias_carta2++;
        break;
    case 7:
        printf("==========SUPER PODER==========\n");
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, superpoder1);
        printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, superpoder2);
        atributo1carta1 = superpoder1;
        atributo1carta2 = superpoder2;
        if (superpoder1 > superpoder2)
            vitorias_carta1++;
        else if (superpoder2 > superpoder1)
            vitorias_carta2++;
        break;
    default:
        printf("Opcao invalida para o primeiro atributo! Encerrando o programa.\n");
        exit(0);
    }
    printf("=============================\n");

    printf("\n====================================================\n");
    printf("Escolha o segundo atributo para comparacao!\n");
    printf("Obs: Deve ser diferente do primeiro atributo!\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Populacional (menor densidade vence)\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder (soma de todos os atributos)\n");
    printf("=> ");
    scanf("%d", &segundoAtributo);
    printf("====================================================\n");

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Voce escolheu o mesmo atributo! Tente novamente.\n");
        exit(0); // Pesquisei na internet algum comando que possibilitasse encerrar o programa apartir daqui. (Escolhi adicionar para organizar melhor).
    }
    else
    {
        switch (segundoAtributo)
        {
        case 1:
            printf("==========POPULACAO==========\n");
            printf("A Carta => (%s) Possui => (%lu)\n", nomecidade1, populacao1);
            printf("A Carta => (%s) Possui => (%lu)\n", nomecidade2, populacao2);
            atributo2carta1 = (float)populacao1;
            atributo2carta2 = (float)populacao2;
            if (populacao1 > populacao2)
                vitorias_carta1++;
            else if (populacao2 > populacao1)
                vitorias_carta2++;
            break;
        case 2:
            printf("==========AREA==========\n");
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, area1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, area2);
            atributo2carta1 = area1;
            atributo2carta2 = area2;
            if (area1 > area2)
                vitorias_carta1++;
            else if (area2 > area1)
                vitorias_carta2++;
            break;
        case 3:
            printf("==========PIB==========\n");
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, pib1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, pib2);
            atributo2carta1 = pib1;
            atributo2carta2 = pib2;
            if (pib1 > pib2)
                vitorias_carta1++;
            else if (pib2 > pib1)
                vitorias_carta2++;
            break;
        case 4:
            printf("==========PONTOS TURISTICOS==========\n");
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade1, turistico1);
            printf("A Carta => (%s) Possui => (%d)\n", nomecidade2, turistico2);
            atributo2carta1 = (float)turistico1;
            atributo2carta2 = (float)turistico2;
            if (turistico1 > turistico2)
                vitorias_carta1++;
            else if (turistico2 > turistico1)
                vitorias_carta2++;
            break;
        case 5:
            printf("==========DENSIDADE POPULACIONAL==========\n");
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, densidade1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, densidade2);
            atributo2carta1 = densidade1;
            atributo2carta2 = densidade2;
            if (densidade1 < densidade2)
                vitorias_carta1++;
            else if (densidade2 < densidade1)
                vitorias_carta2++;
            printf("OBS: A menor densidade vence!\n");
            break;
        case 6:
            printf("==========PIB PER CAPITA==========\n");
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, capita1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, capita2);
            atributo2carta1 = capita1;
            atributo2carta2 = capita2;
            if (capita1 > capita2)
                vitorias_carta1++;
            else if (capita2 > capita1)
                vitorias_carta2++;
            break;
        case 7:
            printf("==========SUPER PODER==========\n");
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade1, superpoder1);
            printf("A Carta => (%s) Possui => (%.2f)\n", nomecidade2, superpoder2);
            atributo2carta1 = superpoder1;
            atributo2carta2 = superpoder2;
            if (superpoder1 > superpoder2)
                vitorias_carta1++;
            else if (superpoder2 > superpoder1)
                vitorias_carta2++;
            break;
        default:
            printf("Opcao invalida para o segundo atributo! Encerrando o programa.\n");
            exit(0);
        }
        printf("=============================\n");
    }

    printf("\n====================================================\n");
    printf("           RESULTADO DA COMPARAÇAO POR ATRIBUTO\n");
    printf("====================================================\n");

    if (vitorias_carta1 > vitorias_carta2)
    {
        printf("Carta 1 (%s) venceu a comparacao de atributos!\n", nomecidade1);
    }
    else if (vitorias_carta2 > vitorias_carta1)
    {
        printf("Carta 2 (%s) venceu a comparacao de atributos!\n", nomecidade2);
    }
    else
    {
        printf("Houve um empate na comparacao de atributos!\n");
    }

    printf("Pontos da Carta 1: %d\n", vitorias_carta1);
    printf("Pontos da Carta 2: %d\n", vitorias_carta2);

    printf("\n====================================================\n");
    printf("                  SOMA DOS ATRIBUTOS SELECIONADOS\n");
    printf("====================================================\n");

    soma1 = atributo1carta1 + atributo2carta1;
    soma2 = atributo1carta2 + atributo2carta2;

    printf("Soma dos atributos selecionados para Carta 1 (%s): %.2f\n", nomecidade1, soma1);
    printf("Soma dos atributos selecionados para Carta 2 (%s): %.2f\n", nomecidade2, soma2);

    if (soma1 == soma2)
    {
        printf("Empate na soma dos atributos selecionados!\n");
    }
    else if (soma1 > soma2)
    {
        printf("Carta 1 (%s) venceu na soma dos atributos selecionados!\n", nomecidade1);
    }
    else
    {
        printf("Carta 2 (%s) venceu na soma dos atributos selecionados!\n", nomecidade2);
    }

    return 0;
}