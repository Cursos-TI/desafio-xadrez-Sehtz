#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n     ***XADREZ***\n\n");

    printf("*Movimentação da peça: Bispo*\n\n");

    printf("Ponto de partida\n");

    // Declaração de variáveis e logica.

    // Movimentação de 5 casas na diagonal.

    int bispo = 0;
    while (bispo < 5)
    {
        printf("%dº Movimento: Cima, direita.\n", bispo + 1);
        bispo++;
    }
    printf("Ponto de chegada\n\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\n     ***XADREZ***\n\n");

    printf("*Movimentação da peça: Torre*\n\n");

    printf("Ponto de partida\n");

    // Declaração de variáveis e logica.

    // Movimentação de 5 casas para a direita.
    for (int torre = 0; torre < 5; torre++)
    {
        printf("%dº Movimento: Direita.\n", torre + 1);
    }
    printf("Ponto de chegada\n\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n     ***XADREZ***\n\n");

    printf("*Movimentação da peça: Rainha*\n\n");

    printf("Ponto de partida\n");

    // Declaração de variáveis e logica.

    // Movimentação de 5 casas na diagonal.

    int rainha = 0;

    do
    {
        printf("%dº Movimento: Esquerda.\n", rainha + 1);
        rainha++;
    } while (rainha < 8);

    printf("Ponto de chegada\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        printf("\n     ***XADREZ***\n\n");

    printf("*Movimentação da peça: Cavalo*\n\n");

    printf("Ponto de partida\n");

    // Declaração de variáveis e logica.

    // Movimentação de 2 casas para baixo e 1 casa para Esquerda.

    int x, y = 0;

    for (x = 1; x < 2; x++) // Inicio do For Externo
    {
        while (y <= x) // For Interno
        {
            printf("%dº Movimento: Baixo.\n", y + 1);
            y++;
        } // Fim do For Interno

        printf("%dº Movimento: Esquerda.\n", x + y);
    } // Fim do For Externo

    printf("Ponto de chegada\n\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
