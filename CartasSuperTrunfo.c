#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("\nDesafio Super Trunfo: nível aventureiro\n");

    char Estado; // Letra que representa o estado(A à H)
    int PontosTuristicos; //quantidade de pontos turisticos
    char Codigo[4]; //codigo da cidade(número de 1 a 4). Ex A01, A02, B01...
    int População; // Número de habitantes
    char cidade[30]; // Nome da cidade
    float Área; // Área da cidade
    float PIB; // Produto Interno Bruto da cidade
    float Densidade; // Densidade poupulacional: População/Área
    float percapita; // Renda perCapita da população: PIB/População


    char Estado2; // Letra que representa o estado(A à H)
    int PontosTuristicos2; //quantidade de pontos turisticos
    char Codigo2[4]; //codigo da cidade(número de 1 a 4). Ex A01, A02, B01...
    int População2; // Número de habitantes
    char cidade2[30]; // Nome da cidade
    float Área2; // Área da cidade
    float PIB2; // Produto Interno Bruto da cidade
    float Densidade2; // Densidade poupulacional: População/Área
    float percapita2; // Renda perCapita da população: PIB/População

//Informações da carta 1
printf("\nCadastre os dados da Carta 1\n");

    printf("Digite o Estado:\n");
    scanf(" %c", &Estado);

    printf("Digite o Código da sua cidade\n");
    scanf("%3s", Codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade);

    printf("Digite a População da sua cidade:\n");
    scanf("%d", &População);

    printf("Digite a Área da cidade(km²):\n");
    scanf("%f", &Área);

    printf("Digite o PIB da Cidade(bilhões):\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da Cidade:\n");
    scanf("%d", &PontosTuristicos);

//Informações da carta 2
printf("\nCadatres os dados da carta 2\n");

    printf("Digite o Estado:\n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da sua cidade\n");
    scanf("%3s", Codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a População da sua cidade:\n");
    scanf("%d", &População2);

    printf("Digite a Área da cidade(km²):\n");
    scanf("%f", &Área2);

    printf("Digite o PIB da Cidade(bilhões):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da Cidade:\n");
    scanf("%d", &PontosTuristicos2);

    Densidade = (float)População / Área;
    
    percapita = (PIB * 1000000000.0) / População;
    printf("\nCarta 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código da cidade: %s\n", Codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n", Área);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos);
    printf("A densidade populacional é: %.2f hab/km²\n", Densidade);
    printf("O PIB perCapita da cidade é: %.2f reais\n", percapita);

    Densidade2 = (float)População2 / Área2;
    
    percapita2 = (PIB2 * 1000000000.0) / População2;    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da cidade: %s\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
    printf("A densidade populacional é: %.2f hab/km²\n", Densidade2);
    printf("O PIB perCapita da cidade é: %.2f reais\n", percapita2);
    
    
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
