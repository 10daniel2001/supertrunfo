#include <stdio.h>

int main() {
    // variaveis da carta 01
    char estado01[15];//Ultilizando ate 14 caracter
    char codigo01[5];
    char nomecidade01[50];
    int populacao01;
    float areao01;
    float pib01;
    int pontosturisticos01;

    // variaveis da carta 02
    char estado02[15];
    char codigo02[5];
    char nomecidade02[50];
    int populacao02;
    float areao02;
    float pib02;
    int pontosturisticos02;

    printf("Preencha os dados da carta 01:\n");

    printf("Estado (letra de A a H): \n");
    scanf(" %14s", estado01);
    printf("Codigo ex: G01 \n");
    scanf(" %4s", codigo01);
    printf("Nome da cidade: \n");
    scanf(" %49s", nomecidade01);
    printf("Populacao: \n");
    scanf("%d", &populacao01);
    printf("Area em km²: \n");
    scanf("%f", &areao01);
    printf("PIB em numeros: \n");
    scanf("%f", &pib01);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosturisticos01);

    printf("\nPreencha os dados da carta 02:\n");

    printf("Estado (letra de A a H): \n");
    scanf(" %14s", estado02);
    printf("Codigo ex: G01 \n");
    scanf(" %4s", codigo02);
    printf("Nome da cidade: \n");
    scanf(" %49s", nomecidade02);
    printf("Populacao: \n");
    scanf("%d", &populacao02);
    printf("Area em km²: \n");
    scanf("%f", &areao02);
    printf("PIB em numeros: \n");
    scanf("%f", &pib02);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosturisticos02);

    printf("\n--- Carta 01 ---\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Cidade: %s\n", nomecidade01);
    printf("Populacao: %d\n", populacao01);
    printf("Area: %.2f km²\n", areao01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turisticos: %d\n", pontosturisticos01);

    printf("\n--- Carta 02 ---\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", nomecidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f km²\n", areao02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turisticos: %d\n", pontosturisticos02);

    return 0;
}
