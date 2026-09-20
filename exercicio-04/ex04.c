/*
 * Aluno: Marcos
 * Exercício: 04
 * Descrição: Algoritmo para simulacao da fila de um banco.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int fila;

    printf("Informe a quantidade de pessoas na fila: "); scanf("%d", &fila);

    for (int i = 1; i <= fila; i++) {

        printf("Senha %d\n", i);

    }


    return 0;
}