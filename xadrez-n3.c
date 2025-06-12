#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Procedimento para mover o Bispo
void moverBispo(int casas) {
    for (int i = 1; i <= 5; i++) {
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
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
    

    printf("DESAFIO 3 - NÍVEL MESTRE\n"); // Nível Mestre - Funções Recursivas e Loops Aninhados

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo - 5 casas na diagonal superior direita\n");
    moverBispo(1); // Chama o procedimento para mover o Bispo cinco casas na diagonal superior direita


    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre - 5 casas para a direita\n");
    moverTorre(5); // Chama o procedimento para mover a Torre cinco casas para a direita
    

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha - 8 casas para a esquerda\n");
    moverRainha(8); // Chama o procedimento para mover a Rainha oito casas para a esquerda
    

    // Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo - 2 casas para cima e 1 casa para a direita\n");

    for (int i = 0, j = 1; i < 2 && j == 1; i++, j) {
        printf("Cima\n"); // Imprime "Cima" duas vezes
    }
    printf("Direita\n"); // Imprime "Direita" uma vez


    return 0;
}
