/*
 * Aluno: Marcos
 * Exercício: 28
 * Descrição: Resolução do exercício 28 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <math.h>


int main () {

    double raio, area, perimetro;
    double pi = M_PI;

    printf("Informe a raio do circulo: "); scanf("%lf", &raio);

    area = (M_PI * (raio * raio));
    perimetro = (2 * M_PI * raio);

    printf("Area do circulo = %.2lf\n", area);
    printf("Perimetro do circulo = %.2lf\n", perimetro);

    return 0;
}