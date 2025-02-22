#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {printf ("Bem vindo ao jogo Super Trunfo!\n");
    char Estado[30];
    int Codigocarta;
    char Nomecidade[100];
    int Populacao;
    float Area;
    float PIB;
    int Pontosturisticos;

    printf ( "Para cadastrar sua primeira carta precisará nos passar alguns dados, vou solicita-los à você.\n");
    printf ("Qual o Estado?\n");
    scanf ("%s, Estado");

    printf("Qual o código da sua carta?\n");
    scanf("%d", &Codigocarta);

    printf("Qual o nome da cidade?\n");
    scanf("%s", Nomecidade);

    printf("Qual o número populacional?\n");
    scanf("%d", &Populacao);

    printf("Qual é a área dessa cidade em KM²? utilize ponto como separador decimal se for preciso\n");
    scanf(" %f", &Area);

    printf("Digite o PIB em milhões.\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos da cidade.\n");
    scanf(" %[^\n]s", Pontosturisticos);

    printf("\nCarta cadastrada com sucesso, seguem os dados informados:\n");
    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %d\n", Codigocarta);
    printf("Cidade: %s\n", Nomecidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f milhões\n", PIB);
    printf("Pontos turísticos: %d\n", Pontosturisticos);
    


 
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
