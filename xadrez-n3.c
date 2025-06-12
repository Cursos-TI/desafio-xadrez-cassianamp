#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Procedimento para mover o Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima e Direita\n");
        moverBispo(casas - 1);
    }
}

// Procedimento para mover a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Procedimento para mover a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}


int main() {
    
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 1, torre, rainha = 1, cavalo = 1;


    printf("DESAFIO 3 - NÍVEL MESTRE\n"); // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.


    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo - 5 casas na diagonal superior direita\n");
    moverBispo(5); // Chama o procedimento para mover o Bispo cinco casa na diagonal superior direita


    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre - 5 casas para a direita\n");
    moverTorre(5); // Chama o procedimento para mover a Torre cinco casas para a direita
    

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha - 8 casas para a esquerda\n");
    moverRainha(8); // Chama o procedimento para mover a Rainha oito casas para a esquerda
    

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo - 2 casas para cima e 1 casa para a direita\n");

    for (int i = 0, j = 1; i < 2 && j == 1; i++, j) {
        printf("Cima\n"); // Imprime "Cima" duas vezes
        printf("Direita\n"); // Imprime "Direita" uma vez
    }


    return 0;
}
