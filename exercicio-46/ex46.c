/*
 * Aluno: Marcos
 * Exercício: 46
 * Descrição: Resolução do exercício 46 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: "); scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
