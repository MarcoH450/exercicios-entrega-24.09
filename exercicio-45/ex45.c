/*
 * Aluno: Marcos
 * Exercício: 45
 * Descrição: Resolução do exercício 45 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 10;
    int c = a++ + --b;

    /* --b produz 9; a++ usa 5 na soma e depois altera a para 6. */
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
