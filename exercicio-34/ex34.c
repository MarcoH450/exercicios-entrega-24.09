/*
 * Aluno: Marcos
 * Exercício: 34
 * Descrição: Resolução do exercício 34 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#define PI 3.14159

int main () {

    double raio, area;

    printf("Insira o raio do circulo: "); scanf("%lf", &raio);
    
    area = PI * (raio * raio);

    printf("Area do circulo = %.2lf\n", area);

    return 0;
}