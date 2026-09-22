/*
 * Aluno: Marcos
 * Exercício: 15
 * Descrição: Resolução do exercício 15 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("Esse numero e par\n");
    } else {
        printf("Esse numero e impar\n");
    }

    return 0;
}
