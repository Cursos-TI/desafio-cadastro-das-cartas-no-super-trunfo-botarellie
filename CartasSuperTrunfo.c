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

    // Declaração de variáveis Carta2
    char estado2[50];            //Estado (UF)
    char codCidade2[4];          //Código da cidade
    char numCodCidade2[4];       //Número código da cidade
    char nomeCidade2[50];        //nome da cidade
    unsigned long int populacao2;//população de habitantes
    float area2;                 //área da cidade
    float pib2;                  //PIB da cidade
    int numPontosTuristicos2;    //número total de pontos turísticos

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

    //Carta2
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
    
    // Exibição dos Dados das Cartas:
    //Carta1
    printf("\nAbaixo os dados inseridos para a carta: %s%s\n", codCidade1, numCodCidade1);
    printf("\nNome do Estado: %s", estado1);                                            // Exibe o nome do Estado    
    printf("\nNome da cidade: %s", nomeCidade1);                                        // Exibe o nome da cidade
    printf("\nPopulação da cidade: %lu", populacao1);                                   // Exibe a população da cidade
    printf("\nÁrea da cidade: %.2f", area1);                                            // Exibe a área da cidade
    printf("\nPIB da cidade: %.2f", pib1);                                              // Exibe o PIB da cidade
    printf("\nNúmero de pontos turísticos da cidade: %d\n", numPontosTuristicos1);      // Exibe o numero de pontos turísticos da cidade

    //Carta2
    printf("\n---------------------------------------------------------\n");            // Separador
    printf("\nAbaixo os dados inseridos para a carta: %s%s\n", codCidade2, numCodCidade2);
    printf("\nNome do Estado: %s", estado2);                                            // Exibe o nome do Estado
    printf("\nNome da cidade: %s", nomeCidade2);                                        // Exibe o nome da cidade
    printf("\nPopulação da cidade: %lu", populacao2);                                    // Exibe a população da cidade
    printf("\nÁrea da cidade: %.2f", area2);                                            // Exibe a área da cidade
    printf("\nPIB da cidade: %.2f", pib2);                                              // Exibe o PIB da cidade
    printf("\nNúmero de pontos turísticos da cidade: %d\n", numPontosTuristicos2);      // Exibe o numero de pontos turísticos da cidade

    printf("\nFIM\n");
    
    return 0;
}
