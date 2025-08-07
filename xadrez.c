#include <stdio.h>

void moverCima(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    moverCima(passos - 1);
}

void moverBaixo(int passos) {
    if (passos == 0) return;
    printf("Baixo\n");
    moverBaixo(passos - 1);
}

void moverEsquerda(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverEsquerda(passos - 1);
}

void moverDireita(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverDireita(passos - 1);
}

void torre(int passos) {
    printf("Movimentos da Torre:\n");
    moverCima(passos);
    moverBaixo(passos);
    moverEsquerda(passos);
    moverDireita(passos);
    printf("\n");
}

// ------------------------ BISPO (recursivo e com loops aninhados) ------------------------

void moverDiagonalSuperiorDireita(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverDiagonalSuperiorDireita(passos - 1);
}

void moverDiagonalInferiorEsquerda(int passos) {
    if (passos == 0) return;
    printf("Baixo\n");
    printf("Esquerda\n");
    moverDiagonalInferiorEsquerda(passos - 1);
}

void bispoRecursivo(int passos) {
    printf("Movimentos do Bispo (Recursivo):\n");
    moverDiagonalSuperiorDireita(passos);
    moverDiagonalInferiorEsquerda(passos);
    printf("\n");
}

void bispoComLoops(int passos) {
    printf("Movimentos do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < passos; j++) {
            if (i == j) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
    printf("\n");
}

// ------------------------ RAINHA (recursiva combinada) ------------------------

void rainha(int passos) {
    printf("Movimentos da Rainha:\n");
    moverCima(passos);
    moverBaixo(passos);
    moverEsquerda(passos);
    moverDireita(passos);
    moverDiagonalSuperiorDireita(passos);
    moverDiagonalInferiorEsquerda(passos);
    printf("\n");
}

// ------------------------ CAVALO (loops complexos) ------------------------

void cavalo(int passos) {
    printf("Movimentos do Cavalo:\n");

    for (int i = 0; i <= passos * 2; i++) {
        for (int j = 0; j <= passos * 2; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }

            if (i + j > 3) {
                continue;
            }
        }
    }

    printf("\n");
}

// ------------------------ MAIN ------------------------

int main() {
    int passos = 3; // Número de casas a serem percorridas por cada peça

    torre(passos);
    bispoRecursivo(passos);
    bispoComLoops(passos);
    rainha(passos);
    cavalo(passos);

    return 0;
}
