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

    printf("\n⚔ HORA DA BATALHA! ⚔\n");

int atributo1, atributo2;
float valor1_c1 = 0, valor1_c2 = 0;
float valor2_c1 = 0, valor2_c2 = 0;
char nomeAtributo1[30], nomeAtributo2[30];

printf("\n➶ MENU DE BATALHA - PRIMEIRO ATRIBUTO\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("Escolha: ");
scanf("%d", &atributo1);

switch(atributo1){
    case 1:
        valor1_c1 = populacao;
        valor1_c2 = populacao1;
        sprintf(nomeAtributo1, "População");
        break;
    case 2:
        valor1_c1 = area;
        valor1_c2 = area1;
        sprintf(nomeAtributo1, "Área");
        break;
    case 3:
        valor1_c1 = pib;
        valor1_c2 = pib1;
        sprintf(nomeAtributo1, "PIB");
        break;
    case 4:
        valor1_c1 = pontosT;
        valor1_c2 = pontosT1;
        sprintf(nomeAtributo1, "Pontos Turísticos");
        break;
    case 5:
        valor1_c1 = densidadep;
        valor1_c2 = densidadep1;
        sprintf(nomeAtributo1, "Densidade Demográfica");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

printf("\n➶ MENU DE BATALHA - SEGUNDO ATRIBUTO\n");
printf("Escolha um atributo diferente do primeiro!\n");

if(atributo1 != 1) printf("1 - População\n");
if(atributo1 != 2) printf("2 - Área\n");
if(atributo1 != 3) printf("3 - PIB\n");
if(atributo1 != 4) printf("4 - Pontos Turísticos\n");
if(atributo1 != 5) printf("5 - Densidade Demográfica\n");

printf("Escolha: ");
scanf("%d", &atributo2);

if(atributo2 == atributo1){
    printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    return 0;
}

switch(atributo2){
    case 1:
        valor2_c1 = populacao;
        valor2_c2 = populacao1;
        sprintf(nomeAtributo2, "População");
        break;
    case 2:
        valor2_c1 = area;
        valor2_c2 = area1;
        sprintf(nomeAtributo2, "Área");
        break;
    case 3:
        valor2_c1 = pib;
        valor2_c2 = pib1;
        sprintf(nomeAtributo2, "PIB");
        break;
    case 4:
        valor2_c1 = pontosT;
        valor2_c2 = pontosT1;
        sprintf(nomeAtributo2, "Pontos Turísticos");
        break;
    case 5:
        valor2_c1 = densidadep;
        valor2_c2 = densidadep1;
        sprintf(nomeAtributo2, "Densidade Demográfica");
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

float soma1 = 0, soma2 = 0;

if(atributo1 == 5) {
    soma1 += valor1_c1;
    soma2 += valor1_c2;
} else {
    soma1 += valor1_c1;
    soma2 += valor1_c2;
}


if(atributo2 == 5) {
    soma1 += valor2_c1;
    soma2 += valor2_c2;
} else {
    soma1 += valor2_c1;
    soma2 += valor2_c2;
}

printf("\nRESULTADO DA BATALHA\n");
printf("Carta 1: %s", cidade);
printf("Carta 2: %s\n", cidade1);

printf("\nAtributos escolhidos:\n");
printf("1º - %s\n", nomeAtributo1);
printf("2º - %s\n", nomeAtributo2);

printf("\n--- Valores ---\n");
printf("%s:\n", cidade);
printf("  %s: %.2f\n", nomeAtributo1, valor1_c1);
printf("  %s: %.2f\n", nomeAtributo2, valor2_c1);
printf("  Soma: %.2f\n\n", soma1);

printf("%s:\n", cidade1);
printf("  %s: %.2f\n", nomeAtributo1, valor1_c2);
printf("  %s: %.2f\n", nomeAtributo2, valor2_c2);
printf("  Soma: %.2f\n\n", soma2);

/* Operador ternário para decidir vencedor */
if(soma1 == soma2)
    printf("Resultado: Empate!\n");
else
    printf("Vencedora: %s\n", (soma1 > soma2) ? "Carta 1" : "Carta 2");

return 0;
}
