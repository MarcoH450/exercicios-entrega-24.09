/*
 * Aluno: Marcos
 * Exercício: 28
 * Descrição: Resolução do exercício 28 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <math.h>

int main () {

    float raio, area, perimetro;

    printf("Informe o raio do circulo: "); scanf("%f", &raio);

    area = M_PI * raio * raio;
    perimetro = 2 * M_PI * raio;

    printf("Area do circulo = %.2f\n", area);
    printf("Perimetro do circulo = %.2f\n", perimetro);

    return 0;
}
