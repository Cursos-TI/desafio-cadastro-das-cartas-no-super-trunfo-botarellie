#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração de variáveis Carta1
    char estado1[50];            //Estado (UF)
    char codCidade1[4];          //Código da cidade
    char numCodCidade1[4];       //Número código da cidade
    char nomeCidade1[50];        //nome da cidade
    unsigned long int populacao1;//população de habitantes
    float area1;                 //área da cidade
    float pib1;                  //PIB da cidade
    int numPontosTuristicos1;    //número total de pontos turísticos
    float densidadePopulacional1;// Número de habitantes por km²
    float pibPerCapta1;           //Calcula PIB per capta da cidade
    float superPoderCarta1;       //Soma de todos os valores numericos da carta
    char codCarta1[4];            //Código da carta concatenado

    // Declaração de variáveis Carta2
    char estado2[50];            //Estado (UF)
    char codCidade2[4];          //Código da cidade
    char numCodCidade2[4];       //Número código da cidade
    char nomeCidade2[50];        //nome da cidade
    unsigned long int populacao2;//população de habitantes
    float area2;                 //área da cidade
    float pib2;                  //PIB da cidade
    int numPontosTuristicos2;    //número total de pontos turísticos
    float densidadePopulacional2;// Número de habitantes por km² 
    float pibPerCapta2;           //Calcula PIB per capta da cidade
    float superPoderCarta2;       //Soma de todos os valores numericos da carta
    char codCarta2[4];            //Código da carta concatenado

    // Declaração de variáveis de resultado da comparação das cartas
    int resultPopulacao;
    int resultArea;
    int resultPib;
    int resultPontosTur;
    int resultdensidadePop;
    int resultPibPerCap;
    int resultSuperPoder;

    // Cadastro das Cartas:
    //Carta1
    printf("Insira as informações para a primeira carta: \n");

    printf("\nDigite uma letra de 'A' a 'H' para o código da carta: ");
    scanf(" %s", codCidade1);

    printf("\nDigite um número de '01' a '04' para o código da carta: ");
    scanf(" %s", numCodCidade1);

    printf("\nDigite um Estado(UF): ");
    scanf(" %49[^\n]", estado1);
     
    printf("\nDigite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);   

    printf("\nDigite a população da cidade: ");
    scanf("%lu", &populacao1);  

    printf("\nDigite a área da cidade: ");
    scanf(" %f", &area1);

    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf(" %d", &numPontosTuristicos1);

    //Calcula densidade populacional da cidade
    densidadePopulacional1 = (float)populacao1 / area1;

    //Calcula Pib per Capta da cidade
    pibPerCapta1 = ((float)populacao1 / pib1);


    //Carta2
    printf("\n---------------------------------------------------------\n");            // Separador
    printf("\nInsira as informações para a segunda carta: \n");

    printf("\nDigite uma letra de 'A' a 'H' para o código da carta: ");
    scanf(" %s", codCidade2);
        
    printf("\nDigite um número de '01' a '04' para o código da carta: ");
    scanf(" %s", numCodCidade2);

    printf("\nDigite uma Estado(UF): ");
    scanf(" %49[^\n]", estado2);

    printf("\nDigite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);   

    printf("\nDigite a população da cidade: ");
    scanf("%lu", &populacao2);  

    printf("\nDigite a área da cidade: ");
    scanf(" %f", &area2);

    printf("\nDigite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf(" %d", &numPontosTuristicos2);

    //Calcula densidade populacional da cidade
    densidadePopulacional2 = (float)populacao2 / area2;

    //Calcula Pib per Capta da cidade
    pibPerCapta2 = ((float)populacao2 / pib2);
    
    // Exibição dos Dados das Cartas:
    //Carta1
    printf("\nAbaixo os dados inseridos para a carta: %s%s\n", codCidade1, numCodCidade1);
    printf("\nNome do Estado: %s", estado1);                                            // Exibe o nome do Estado    
    printf("\nNome da cidade: %s", nomeCidade1);                                        // Exibe o nome da cidade
    printf("\nPopulação da cidade: %lu", populacao1);                                   // Exibe a população da cidade
    printf("\nÁrea da cidade: %.2f", area1);                                            // Exibe a área da cidade
    printf("\nPIB da cidade: %.2f", pib1);                                              // Exibe o PIB da cidade
    printf("\nNúmero de pontos turísticos da cidade: %d", numPontosTuristicos1);      // Exibe o numero de pontos turísticos da cidade
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);       // Exibe a quantidade de habitantes por km²
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapta1);                            // Exibe o PIB per capita da cidade

    //Carta2
    printf("\n---------------------------------------------------------\n");            // Separador
    printf("\nAbaixo os dados inseridos para a carta: %s%s\n", codCidade2, numCodCidade2);
    printf("\nNome do Estado: %s", estado2);                                            // Exibe o nome do Estado
    printf("\nNome da cidade: %s", nomeCidade2);                                        // Exibe o nome da cidade
    printf("\nPopulação da cidade: %lu", populacao2);                                    // Exibe a população da cidade
    printf("\nÁrea da cidade: %.2f", area2);                                            // Exibe a área da cidade
    printf("\nPIB da cidade: %.2f", pib2);                                              // Exibe o PIB da cidade
    printf("\nNúmero de pontos turísticos da cidade: %d", numPontosTuristicos2);      // Exibe o numero de pontos turísticos da 
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);       // Exibe a quantidade de habitantes por km²
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapta2);                            // Exibe o PIB per capita da cidadecidade

    //Soma dos atributos numéricos para super poder
    superPoderCarta1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 + pibPerCapta1;
    // printf("\nSuper poder Carta 1: %.2f", superPoderCarta1);

    superPoderCarta2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapta2;
    // printf("\nSuper poder Carta 2: %.2f", superPoderCarta2);
    
    // //Comparação das Cartas
    // resultPopulacao = populacao1 > populacao2;
    // resultArea = area1 > area2;
    // resultPib = pib1 > pib2;
    // resultPontosTur = numPontosTuristicos1 > numPontosTuristicos2;
    // resultdensidadePop = densidadePopulacional1 < densidadePopulacional2;
    // resultPibPerCap = pibPerCapta1 > pibPerCapta2;
    // resultSuperPoder = superPoderCarta1 > superPoderCarta2;
    
    // //Resultado comparação das cartas
    // printf("\n---------------------------------------------------------\n");            // Separador
    // printf("\nAbaixo resultado da comparação das cartas");
    // printf("\nPopulação: %d", resultPopulacao);
    // printf("\nArea: %d", resultArea);
    // printf("\nPib: %d", resultPib);
    // printf("\nPontos Turísticos: %d", resultPontosTur);
    // printf("\nDensidade Populacional: %d", resultdensidadePop);
    // printf("\nPibPerCapita: %d", resultPibPerCap);
    // printf("\nSuper Poder: %d", resultSuperPoder);

    //Resultado comparação das cartas
    printf("\n---------------------------------------------------------\n");
    printf("Comparação das cartas (Atributo Super poder)\n");

    //Compara o atributo e exibe o vencedor
    if (superPoderCarta1 > superPoderCarta2)
    {
        printf("\nCarta %s%s: %s - %s %.2f", codCidade1,numCodCidade1,nomeCidade1,estado1,superPoderCarta1);
        printf("\nCarta %s%s: %s - %s %.2f", codCidade2,numCodCidade2,nomeCidade2,estado2,superPoderCarta2);
        printf("\n---------------------------------------------------------");
        printf("\nResultado: Carta %s%s %s - %s venceu!", codCidade1,numCodCidade1,nomeCidade1,estado1);
    }
    else{
        printf("\nCarta %s%s: %s - %s %.2f", codCidade1,numCodCidade1,nomeCidade1,estado1,superPoderCarta1);
        printf("\nCarta %s%s: %s - %s %.2f", codCidade2,numCodCidade2,nomeCidade2,estado2,superPoderCarta2);
        printf("\n---------------------------------------------------------");
        printf("\nResultado: Carta %s%s %s - %s venceu!",codCidade2,numCodCidade2,nomeCidade2,estado2);
        };
    

    printf("\nFIM\n");
    
    return 0;
}
