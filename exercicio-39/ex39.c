/*
 * Aluno: Marcos
 * Exercício: 39
 * Descrição: Resolução do exercício 39 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

/*
 * Multiplicacao e divisao sao calculadas primeiro, da esquerda para a
 * direita: 5 * 2 = 10 e 10 / 3 = 3 (divisao inteira). Depois,
 * 10 + 3 - 1 = 12.
 */

int main () {

    int x;

    x = 10 + 5 * 2 / 3 - 1;

    printf("O valor de x e = %d\n", x);

    return 0;
}
