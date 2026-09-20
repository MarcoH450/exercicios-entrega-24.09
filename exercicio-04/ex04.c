/*
 * Aluno: Marcos
 * Exercício: 04
 * Descrição: Resolução do exercício 04 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int fila;

    printf("Quantas pessoas estão na fila?\n"); scanf("%d", &fila);

    for (int i = 1; i <= fila; i++) {

        printf("Senha %d\n", i);

    }


    return 0;
}