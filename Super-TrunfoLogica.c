#include <stdio.h>
 
int main() {
    char estado;
    char codigo[4];
    char cidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosT;
    
    printf("Digite a letra do estado: \n"); //Entre A e H
    scanf(" %c", &estado);
    printf("Digite o código da carta: \n"); //ex: A01, B02
    scanf("%3s", &codigo);
    printf("Digite o nome da cidade: \n"); //ex: Rio de Janeiro
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    fgets(cidade, 30, stdin);
    printf("Digite a quantidade de pessoas que habitam a cidade: \n");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o produto interno bruto da cidade: \n"); //PIB da cidade (Bilhões)
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosT);
    
    float densidadep = (float)populacao/area;
    float pibpercapta = pib/(float)populacao;
    float inverso = area/(float)populacao;
    float superPoder;
    superPoder = (float)populacao+area+pib+(float)pontosT+pibpercapta+inverso;
    
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosT);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep);
    printf("PIB per Capita: %.2f reais \n", pibpercapta);
    printf("SuperPoder: %f \n", superPoder);
    
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosT1;
    printf("Digite a letra do estado: \n"); //Entre A e H
    scanf(" %c", &estado1);
    printf("Digite o código da carta: \n"); //ex: A01, B02
    scanf("%3s", &codigo1);
    printf("Digite o nome da cidade: \n"); //ex: Rio de Janeiro
    int ch1;
    while ((ch1 = getchar()) != '\n' && ch1 != EOF);

    fgets(cidade1, 30, stdin);
    printf("Digite a quantidade de pessoas que habitam a cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);
    printf("Digite o produto interno bruto da cidade: \n"); //PIB da cidade (Bilhões)
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosT1);
    
    float densidadep1 = (float)populacao1/area1;
    float pibpercapta1 = pib1/(float)populacao1;
    float inverso1 = area1/(float)populacao1;
    float superPoder1;
    superPoder1 = (float)populacao1+area1+pib1+(float)pontosT1+pibpercapta1+inverso1;
    
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosT1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadep1);
    printf("PIB per Capita: %.2f reais \n", pibpercapta1);
    printf("SuperPoder: %f \n", superPoder1);
    
    printf("Hora da batalha! \n");
    
    int opcao;

    printf("\n➶ MENU DE BATALHA ⚔\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    printf("\nRESULTADO\n");
    printf("Cidade 1: %s", cidade);
    printf("Cidade 2: %s\n", cidade1);
    
    switch(opcao){

    case 1: // População
        printf("Atributo: População\n");
        printf("Carta 1: %lu\n", populacao);
        printf("Carta 2: %lu\n", populacao1);

        if(populacao > populacao1)
            printf("Vencedora: Carta 1\n");
        else if(populacao1 > populacao)
            printf("Vencedora: Carta 2\n");
        else
            printf("Empate!\n");
        break;

    case 2: // Área
        printf("Atributo: Área\n");
        printf("Carta 1: %.2f\n", area);
        printf("Carta 2: %.2f\n", area1);

        if(area > area1)
            printf("Vencedora: Carta 1\n");
        else if(area1 > area)
            printf("Vencedora: Carta 2\n");
        else
            printf("Empate!\n");
        break;

    case 3: // PIB
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f\n", pib);
        printf("Carta 2: %.2f\n", pib1);

        if(pib > pib1)
            printf("Vencedora: Carta 1\n");
        else if(pib1 > pib)
            printf("Vencedora: Carta 2\n");
        else
            printf("Empate!\n");
        break;

    case 4: // Pontos turísticos
        printf("Atributo: Pontos Turísticos\n");
        printf("Carta 1: %d\n", pontosT);
        printf("Carta 2: %d\n", pontosT1);

        if(pontosT > pontosT1)
            printf("Vencedora: Carta 1\n");
        else if(pontosT1 > pontosT)
            printf("Vencedora: Carta 2\n");
        else
            printf("Empate!\n");
        break;

    case 5: // Densidade demográfica (REGRA INVERTIDA)
        printf("Atributo: Densidade Demográfica\n");
        printf("Carta 1: %.2f\n", densidadep);
        printf("Carta 2: %.2f\n", densidadep1);

        // menor densidade vence
        if(densidadep < densidadep1)
            printf("Vencedora: Carta 1\n");
        else if(densidadep1 < densidadep)
            printf("Vencedora: Carta 2\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida! Escolha um número de 1 a 5.\n");
        break;
}
    
    return 0;
}
