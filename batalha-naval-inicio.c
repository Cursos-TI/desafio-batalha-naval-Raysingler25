#include <stdio.h>

int main() {
    int tabuleiro[10][10];  // Vetor bidimensional 10x10

    // Inicializa todas as posições com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal: A1, B1, C1 (linha 0, colunas 0, 1, 2)
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    // Posiciona navio vertical: H4, H5, H6 (coluna 7, linhas 3, 4, 5)
    tabuleiro[3][7] = 3;
    tabuleiro[4][7] = 3;
    tabuleiro[5][7] = 3;

    // Imprime cabeçalho com letras A até J
    printf("   "); // Espaço para os números da lateral
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Imprime o tabuleiro com números na lateral
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // Números de 1 a 10 na lateral
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);  // Valores do tabuleiro
        }
        printf("\n");
    }

    return 0;
}
