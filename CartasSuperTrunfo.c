#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome[50];
    int pop, ndp;
    float area, pib ; 

    printf("Dados da carta 1:\n");
    printf("Insira o  nome da cidade:");
    scanf("%s\n", &nome);

    printf("Insira o número da populção:");
    scanf("%i\n", %pop);

    printf("Insira o nº de pontos turisticos");
    scanf("%i\n", &ndp);

    printf("Insira a area da cidade:");
    scanf("%f\n", &area);

    printf("Insira o PIB:");
    scanf("%f\n", &pib);

    //carta 2
    char nome2[50];
    int pop2, ndp2;
    float area2, pib2 ; 

    printf("Dados da carta 2:\n");
    printf("Insira o  nome da cidade:");
    scanf("%s", &nome2);

    printf("Insira o número da populção:");
    scanf("%i\n", &pop2);

    printf("Insira o nº de pontos turisticos");
    scanf("%i\n", &ndp2);

    printf("Insira a area da cidade:");
    scanf("%f\n", &area2);

    printf("Insira o PIB:");
    scanf("%f\n", &pib2);
    // imprimindo as duas cartas
    printf("Imprimindo dados das duas cartas:\n");
    printf("Carta 1:\n");
    printf("Nome da cidade:%s\n  ",nome);
    printf("Número da população:%i\n Numero de pontos turisticos:%i\n", pop,ndp);
    printf("Area da cidade:%f\n PIB:%f\n",area,pib);
    //carta2
    printf("Carta 2:\n");
    printf("Nome da cidade:%s\n ",nome2);
    printf("Número da população:%i\n Numero de pontos turisticos:%i\n", pop2,ndp2);
    printf("Area da cidade:%f\n PIB:%f\n",area2,pib2);

    



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
