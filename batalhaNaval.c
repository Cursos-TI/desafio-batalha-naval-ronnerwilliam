#include <stdio.h>

int main() {
    printf("Desafio Batalha Naval\n\n");

    // -----------------------------
    // Tabuleiro 5x5 (inicialmente zerado)
    // -----------------------------
    int tabuleiro[5][5] = {0};

    // -----------------------------
    // Posicionamento dos navios
    // -----------------------------
    // Navio 1: vertical (tamanho 3)
    int navio1_x = 1;  // coluna
    int navio1_y = 0;  // linha inicial

    // Navio 2: horizontal (tamanho 2)
    int navio2_x = 3;  // linha
    int navio2_y = 2;  // coluna inicial

    // Preenche o tabuleiro com o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_y + i][navio1_x] = 1;
    }

    // Preenche o tabuleiro com o navio horizontal
    for (int i = 0; i < 2; i++) {
        tabuleiro[navio2_x][navio2_y + i] = 2;
    }

    // -----------------------------
    // Exibição das coordenadas
    // -----------------------------
    printf("Coordenadas do Navio 1 (Vertical):\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d -> (X=%d, Y=%d)\n", i+1, navio1_x, navio1_y + i);
    }

    printf("\nCoordenadas do Navio 2 (Horizontal):\n");
    for (int i = 0; i < 2; i++) {
        printf("Parte %d -> (X=%d, Y=%d)\n", i+1, navio2_y + i, navio2_x);
    }

    return 0;
}
