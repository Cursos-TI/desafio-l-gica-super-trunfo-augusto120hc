#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    #include <stdio.h>

    int main() {
        // Variáveis das cidades
        char estadoC1, estadoC2;
        char codigoC1[10], codigoC2[10];
        char cidade01[20], cidade02[20];
        int populacaoC1, populacaoC2;
        float areaC1, areaC2;
        float pibC1, pibC2;
        int pontosTuristicosC1, pontosTuristicosC2;
    
        // Cidade 01
        printf("Insira dados da carta 01:\n");
        printf("Letra do estado: ");
        scanf(" %c", &estadoC1);  // A linha para pegar a letra do estado
    
        printf("Código da carta: ");
        scanf("%s", codigoC1);  // A linha para pegar o código da carta
    
        printf("Nome da cidade: ");
        scanf("%s", cidade01);  // A linha para pegar o nome da cidade
    
        printf("População: ");
        scanf("%d", &populacaoC1);  // A linha para pegar a população
    
        printf("Área: ");
        scanf("%f", &areaC1);  // A linha para pegar a área
    
        printf("PIB: ");
        scanf("%f", &pibC1);  // A linha para pegar o PIB
    
        printf("Pontos turísticos: ");
        scanf("%d", &pontosTuristicosC1);  // A linha para pegar pontos turísticos
    
        // Cidade 02
        printf("\nInsira dados da carta 02:\n");
        printf("Letra do estado: ");
        scanf(" %c", &estadoC2);  // A linha para pegar a letra do estado
    
        printf("Código da carta: ");
        scanf("%s", codigoC2);  // A linha para pegar o código da carta
    
        printf("Nome da cidade: ");
        scanf("%s", cidade02);  // A linha para pegar o nome da cidade
    
        printf("População: ");
        scanf("%d", &populacaoC2);  // A linha para pegar a população
    
        printf("Área: ");
        scanf("%f", &areaC2);  // A linha para pegar a área
    
        printf("PIB: ");
        scanf("%f", &pibC2);  // A linha para pegar o PIB
    
        printf("Pontos turísticos: ");
        scanf("%d", &pontosTuristicosC2);  // A linha para pegar pontos turísticos
    
        // Exibir dados das cidades
        printf("\n--- CARTA 01 ---\n");
        printf("Estado: %c\n", estadoC1);
        printf("Código: %s\n", codigoC1);
        printf("Cidade: %s\n", cidade01);
        printf("População: %d\n", populacaoC1);
        printf("Área: %.2f\n", areaC1);
        printf("PIB: %.2f\n", pibC1);
        printf("Pontos turísticos: %d\n", pontosTuristicosC1);
    
        printf("\n--- CARTA 02 ---\n");
        printf("Estado: %c\n", estadoC2);
        printf("Código: %s\n", codigoC2);
        printf("Cidade: %s\n", cidade02);
        printf("População: %d\n", populacaoC2);
        printf("Área: %.2f\n", areaC2);
        printf("PIB: %.2f\n", pibC2);
        printf("Pontos turísticos: %d\n", pontosTuristicosC2);
    
        // Comparar a população para decidir o vencedor
        printf("\n");
    
        // Comparando as populações das cidades
        if (populacaoC1 > populacaoC2) {
            printf("A cidade %s VENCEU tem a maior população.\n", cidade01);
            
        } else if (populacaoC2 > populacaoC1) {
            printf("A cidade %s VENCEU tem a maior população.\n", cidade02);
            
        } else {
            printf("Houve um empate na comparação de populações.\n");
        }
    
        return 0;
    }
    

    return 0;
}
