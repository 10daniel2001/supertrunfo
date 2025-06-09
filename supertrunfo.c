#include <stdio.h>
int main(){
//variaveis da carta 01
    char estado01[3]; // um unico caracter
    char codigo01[5]; //Codigo ex A - H
    char nomecidade01[50];// nome da cidade 49 carater 
    int popualcao01;// populcao em numeros inteiros 
    float area01; // area em metros quadrados 
    float pib01; //Pib variavel float ultilizacao de numeros 
    int ponto_turisticos01; // numeros inteiros 

// variaveis da carta 02

     
    char estado02[3]; // um unico caracter
    char codigo02[5]; //Codigo ex A - H
    char nomecidade02[50];// nome da cidade 49 carater 
    int popualcao02;// populcao em numeros inteiros 
    float area02; // area em metros quadrados 
    float pib02; //Pib variavel float ultilizacao de numeros 
    int ponto_turisticos02; // numeros inteiros 

// entrada e saida de dados ultilizando printf e scanf

    printf("****DIGITE OS DADOS DA PRIMEIRA CARTA***** \n");
    printf("ESTADO: de A a H \n");// saida de dados printf
    scanf("%s", estado01); // entrada de dados scanf
    printf("CODIGO: ex G01 \n");
    scanf("%s", codigo01);
    printf("CIDADE: \n");
    scanf("%s", nomecidade01);
    printf("POPULACAO: \n");
    scanf("%d", &popualcao01);
    printf("AREA: em km² \n");
    scanf("%f", &area01);
    printf("PIB: \n");
    scanf("%f", &pib01);
    printf("PONTOS TURISTICOS: \n");
    scanf("%d", &ponto_turisticos01);

    printf("\n");
// entrada e saida de dados da segunda carta 
// printf e scanf %especificadores de formatos 

    printf("****DIGITE OS DADOS DA SEGUNDA CARTA***** \n");
    printf("ESTADO: de A a H \n");// saida de dados printf
    scanf(" %s", estado02); // entrada de dados scanf
    printf("CODIGO: ex G01 \n");
    scanf("%s", codigo02);
    printf("CIDADE: \n");
    scanf("%s", nomecidade02);
    printf("POPULACAO: \n");
    scanf("%d", &popualcao02);
    printf("AREA: em km² \n");
    scanf("%f", &area02);
    printf("PIB: \n");
    scanf("%f", &pib02);
    printf("PONTOS TURISTICOS: \n");
    scanf("%d", &ponto_turisticos02);

// saida de dados das carta ja preenchida usando printf 
// dados da primeira carta 
     printf("+++ESSE SAO OS DADOS DA PRIMEIRA CARTA PREENCHIDO++++\n");
     printf("ESTADO: %s\n", estado01);
     printf("CODIGO: %s\n", codigo01);
     printf("CIDADE: %s\n", nomecidade01);
     printf("POPULACAO: %d\n", popualcao01);
     printf("AREA EM KM²: %.2f\n", area01);
     printf("PIB: %.2f\n", pib01);
     printf("PONTOS TURISTICOS: %d\n", ponto_turisticos01);

     printf("\n");

// saida de dados das carta ja preenchida usando printf 
// dados da segunda carta 
     printf("+++ESSE SAO OS DADOS DA PRIMEIRA CARTA PREENCHIDO++++\n");
     printf("ESTADO: %s\n", estado02);
     printf("CODIGO: %s\n", codigo02);
     printf("CIDADE: %s\n", nomecidade02);
     printf("POPULACAO: %d\n", popualcao02);
     printf("AREA EM KM²: %.2f\n", area02);
     printf("PIB: %.2f\n", pib02);
     printf("PONTOS TURISTICOS: %d\n", ponto_turisticos02);

//finalisando criacao de duas carta do jogo super trunfo em c//


return 0;
}