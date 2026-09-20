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

    delta = pow(b, 2) - (4.0 * a * c);
    
    if (delta < 0) {
        printf("A equação não tem raiz real");
    } else {
        x = (-b + sqrt(delta)) / (2.0 * a);
        printf("O resultado da função sera de: %.2lf\n", x);
    }

    return 0;
}