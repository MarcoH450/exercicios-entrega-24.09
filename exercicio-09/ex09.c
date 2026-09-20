/*
 * Aluno: Marcos
 * Exercício: 09
 * Descrição: Resolução do exercício 09 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int N;

    printf("Digite o tamanho do quadrado: "); scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

