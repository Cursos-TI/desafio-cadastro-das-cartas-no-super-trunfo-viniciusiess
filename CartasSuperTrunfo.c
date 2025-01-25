#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome[20];
    float popolucao;
    float area;
    float pib;
    int ponto_turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade\n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nome);

    printf("Digite a populacao da cidade\n");
    scanf("%f", &popolucao);

    printf("Digite a area da Cidade\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da Cidade\n");
    scanf("%d", &ponto_turistico);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da Cidade %s\n", nome);
    printf("Codigo da Cidade %d\n", codigo);
    printf("Populacao da Cidade %f\n", popolucao);
    printf("Area da Cidade %f\n", area);
    printf("PIB da Cidade %f\n", pib);
    printf("Numero de pontos Turisticos da Cidade %d\n", ponto_turistico);

    return 0;
}
