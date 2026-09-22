/*
 * Aluno: Marcos
 * Exercício: 13
 * Descrição: Resolução do exercício 13 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int numero1, numero2, numero3;

    printf("Insira 3 numeros inteiros:\n"); scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 < numero2 && numero2 < numero3) {
        printf("Os numeros estao em ordem crescente.\n");
    } else if (numero1 > numero2 && numero2 > numero3) {
        printf("Os numeros estao em ordem decrescente.\n");
    } else {
        printf("Os numeros nao estao em ordem crescente nem decrescente.\n");
    }

    return 0;
}
