/*
 * Aluno: Marcos
 * Exercício: 09
 * Descrição: Algoritmo para desenhar a forma de um quadrado.
 * Data: 19/09/2026
 */

#include <stdio.h>

void desenhaQuadrado(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main () {

    int N;

    printf("Digite o tamanho do quadrado: "); scanf("%d", &N);
    desenhaQuadrado(N);

    return 0;
}
