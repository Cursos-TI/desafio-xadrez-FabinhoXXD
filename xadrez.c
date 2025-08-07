#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Movimento do Bispo - 5 casas na Diagonal Cima Direita (usando while)
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }


     // Movimento da Torre - 5 casas para a Direita (usando for)
    int i;
    printf("\nMovimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }


    
    // Movimento da Rainha - 8 casas para a Esquerda (usando do-while)
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    
     // Movimento do Cavalo - 2 casas para Baixo e 1 para Esquerda (usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");

    // Loop externo: controla as 2 casas para baixo (for obrigatório)
    for(int m = 1; m <= 2; m++) {
        printf("Baixo\n");

        // Loop interno: após mover para baixo, executa o movimento para a esquerda (uma única vez)
        // Aqui usamos while, mas poderia ser do-while também
        int n = 1;
        while(n <= 1 && m == 2) { // Só executa na última casa para simular o movimento em "L"
            printf("Esquerda\n");
            n++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
