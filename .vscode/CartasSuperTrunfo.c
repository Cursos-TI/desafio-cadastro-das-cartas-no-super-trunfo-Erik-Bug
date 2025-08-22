#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo: nível novato\n");
printf("\n");
    char Estado[30];
    int PontosTuristicos;
    char Codigo[4];
    int População;
    char cidade[30];
    float Área;
    float PIB;

    char Estado2[30];
    int PontosTuristicos2;
    char Codigo2[4];
    int População2;
    char cidade2[30];
    float Área2;
    float PIB2;


    printf("Digite o nome do Estado:\n");
    scanf("%s", Estado);

   printf("Digite o Código da sua cidade\n");
    scanf("%3s", Codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade);

    printf("Digite a População da sua cidade:\n");
    scanf("%d", &População);

    printf("Digite a Área da cidade(km²):\n");
    scanf("%f", &Área);

    printf("Digite o PIB da Cidade(milhões):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da Cidade:\n");
    scanf("%d", &PontosTuristicos);


    printf("\nDigite o nome do Estado:\n");
    scanf("%s", Estado2);

    printf("Digite o Código da sua cidade\n");
    scanf("%3s", Codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a População da sua cidade:\n");
    scanf("%d", &População2);

    printf("Digite a Área da cidade(km²):\n");
    scanf("%f", &Área2);

    printf("Digite o PIB da Cidade(milhões):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da Cidade:\n");
    scanf("%d", &PontosTuristicos2);

    printf("\nCarta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Código da cidade: %s\n", Codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n", Área);
    printf("PIB: %.2f milhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos);


    printf("\nCarta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da cidade: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f milhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
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
