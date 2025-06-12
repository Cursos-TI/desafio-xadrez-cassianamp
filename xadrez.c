#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 1, torre, rainha = 1, cavalo = 1;


    printf("DESAFIO 1 - NÍVEL NOVATO\n"); // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo - 5 casas na diagonal superior direita\n");

    do
    {
        printf("Cima e Direita\n"); // Imprime a combinação "Cima e Direita" cinco vezes
        bispo++;
    } while (bispo <= 5);


    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre - 5 casas para a direita\n");

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n"); // Imprime "Direita" cinco vezes
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha - 8 casas para a esquerda\n");

    while (rainha <= 8)
    {
        printf("Esquerda\n"); // Imprime "Esquerda" oito vezes
        rainha++;
    }
    


    printf("\nDESAFIO 2 - NÍVEL AVENTUREIRO\n"); // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação do Cavalo - 2 casas para baixo e 1 casa para a esquerda\n");

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
        }
        printf("Esquerda\n"); // Imprime "Esquerda" uma vez
    }
    
   
    
    printf("\nDESAFIO 3 - NÍVEL MESTRE\n"); // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nO desafio do Nível Mestre será feito em outro arquivo.\n");


    return 0;
}
