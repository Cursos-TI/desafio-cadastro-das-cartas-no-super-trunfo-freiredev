#include <stdio.h>

int main() {
    // Aqui estou definindo a aprensentação e entrada do jogo
        printf("Jogo super trunfo!\n");
        printf("_____Informações da carta 1_____\n");

        //Definindo as variáveis e seus tipos de dados
        char estado01, estado02;
        char codigo01[10], codigo02[10];
        char nome01[20], nome02[20];
        int populacao01, populacao02;
        float area01, area02;
        float pib01, pib02;
        int turistico01, turistico02;
        
        //A partir daqui irei apresentar a carta 01 e definir as perguntas de cada variável da carta 01
        printf("_____Carta 01_____\n");
        printf("O estado deve ser representado por letras de 'A' a 'H'\n");
        printf("Digite o estado: ");
        scanf("%c", &estado01);
        printf("A letra do código deve ser seguida de um número de 01 a 04(ex: A01, B03)\n");
        printf("Digite o código: ");
        scanf("%s", &codigo01);
        printf("Digite o nome da cidade: ");
        scanf("%s", &nome01);
        printf("Digite a população: ");
        scanf("%d", &populacao01);
        printf("Digite a área(em km²) da cidade: ");
        scanf("%f", &area01);
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib01);
        printf("Digite a quantidade de pontos turisticos: ");
        scanf("%d", &turistico01);
        printf("_____Fim da carta 01_____\n");

        //A partir daqui irei apresentar a carta 02 e definir as perguntas de cada variável da carta 02
        printf("\n_____Carta 02_____\n");
        printf("Digite o estado da segunda carta: ");
        scanf(" %c", &estado02);
        printf("Digite o código da segunda carta: ");
        scanf("%s", &codigo02);
        printf("Digite o nome da cidade da segunda carta: ");
        scanf("%s", &nome02);
        printf("Digite a população da segunda carta: ");
        scanf("%d", &populacao02);
        printf("Digite a área(em km²) da cidade da segunda carta: ");
        scanf("%f", &area02);
        printf("Digite o PIB da cidade da segunda carta: ");
        scanf("%f", &pib02);
        printf("Digite a quantidade de pontos turisticos da segunda carta: ");
        scanf("%d", &turistico02);
        printf("_____Fim da carta 02_____\n");

        //A partir desta linha, irão conter as consultas e exibição dos conteúdos das variáveis da carta 01
        printf("Carta 01: \n"); 
        printf("Estado: %c\n", estado01); // Usei espaço antes do formatador para o scanf() ignorar qualquer caractere em branco anterior
        printf("Código: %s\n", codigo01);
        printf("Nome da cidade: %s\n", nome01);
        printf("População: %f\n", populacao01);
        printf("Área: %f\n", area01);
        printf("PIB: %f\n", pib01);
        printf("Número de pontos turisticos: %d\n", turistico01);

        //A partir desta linha, irão conter as consultas e exibição dos conteúdos das variáveis da carta 02
        printf("Carta 02: \n");
        printf("Estado: %c\n", estado02);
        printf("Código: %s\n", codigo02);
        printf("Nome da cidade: %s\n", nome02);
        printf("População: %f\n", populacao02);
        printf("Área: %f\n", area02);
        printf("PIB: %f\n", pib02);
        printf("Número de pontos turisticos: %d\n", turistico02);

    return 0;
}
