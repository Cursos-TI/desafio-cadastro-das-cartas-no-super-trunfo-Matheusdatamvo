#include <stdio.h>

int main() {printf ("Bem vindo ao jogo Super Trunfo!\n");
    char Estado[30];
    int Codigocarta;
    char Nomecidade[100];
    int Populacao;
    float Area;
    float PIB;
    int Pontosturisticos;

    printf ( "Para cadastrar sua primeira carta precisará nos passar alguns dados, vou solicita-los à você.\n");
    printf ("Qual a sigla do Estado?\n");
    scanf ("%s", Estado);

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
    scanf("%d", &Pontosturisticos);

    printf("\nCarta cadastrada com sucesso, seguem os dados informados:\n");
    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %d\n", Codigocarta);
    printf("Cidade: %s\n", Nomecidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f milhões\n", PIB);
    printf("Pontos turísticos: %d\n", Pontosturisticos);

    printf("\nAgora iremos para o cadastro da próxima carta, por favor insira os dados:\n");   
    printf ("Qual a sigla do Estado?\n");
    scanf ("%s", Estado);

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
    scanf("%d", &Pontosturisticos);

    printf("\nCarta cadastrada com sucesso, seguem os dados informados:\n");
    printf("Nome do Estado: %s\n", Estado);
    printf("Código da carta: %d\n", Codigocarta);
    printf("Cidade: %s\n", Nomecidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f milhões\n", PIB);
    printf("Pontos turísticos: %d\n", Pontosturisticos);

    printf("\nVocê colaborou com o cadastro de duas cartas, teremos a continuação no próximo nível, obrigado!\n");

    return 0;
}
