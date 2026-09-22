/*
 * Aluno: Marcos
 * Exercício: 37
 * Descrição: Resolução do exercício 37 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c, x, delta;

    printf("Digite o valor de A: "); scanf("%lf", &a);
    printf("Digite o valor de B: "); scanf("%lf", &b);
    printf("Digite o valor de C: "); scanf("%lf", &c);

    if (a == 0.0) {
        printf("O valor de A nao pode ser zero.\n");
        return 1;
    }

    delta = b * b - 4.0 * a * c;

    if (delta < 0.0) {
        printf("A expressao nao possui resultado real.\n");
    } else {
        x = (-b + sqrt(delta)) / (2.0 * a);
        printf("O valor de x e: %.2f\n", x);
    }

    return 0;
}
