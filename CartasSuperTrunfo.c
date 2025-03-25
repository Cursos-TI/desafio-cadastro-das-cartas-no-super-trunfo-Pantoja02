


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



 #include <stdio.h>
int main(){

    //informações necessárias (Carta 1)
    char estado, codgo[30], nome[30];
    int habitantes, turisticos;
    float area, pib;

    //oque sera perido ao usuário
    //Carta 1
    printf("   CARTA 1 \n");
    printf("Digite o estado (Escolha uma letra): \n");
    scanf(" %c", &estado);

    printf("Digite o códgo da carta (deve conter a letra escolida seguida de um zero e o número): \n");
    scanf("%s", &codgo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &habitantes);

    printf("Digite a área da cidade (km²): \n");
    scanf("%5f", &area);

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos);


    //informações necessárias (Carta 2)
    char estado2, codgo2[30], nome2[30];
    int habitantes2, turisticos2;
    float area2, pib2;

    //oque sera perido ao usuário
    //Carta 2
    printf("   CARTA 2 \n");
    printf("Digite o estado (Escolha uma letra): \n");
    scanf(" %c", &estado2);

    printf("Digite o códgo da carta (deve conter a letra escolida seguida de um zero e o número): \n");
    scanf("%s", &codgo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &habitantes2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%5f", &area2);

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);


    //exibição das cartas 1 e 2.
    //carta 1
    printf("   CARTA 1 \n");
    printf("Estado:%c\n", estado);
    printf("Códgo:%s\n", codgo);
    printf("Nome:%s\n", nome);
    printf("Habitantes:%d\n", habitantes);
    printf("Área:%f\n", area);
    printf("PIB:%f\n", pib);
    printf("Pontos Turísticos:%d\n", turisticos);

    //carta 2
    printf("   CARTA 2 \n");
    printf("Estado:%c\n", estado2);
    printf("Códgo:%s\n", codgo2);
    printf("Nome:%s\n", nome2);
    printf("Habitantes:%d\n", habitantes2);
    printf("Área:%f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Pontos Turísticos:%d\n", turisticos2);


    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

