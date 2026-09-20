/*
 * Aluno: Marcos
 * Exercício: 13
 * Descrição: Resolução do exercício 13 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int numero1, numero2, numero3, maior, menor;

    printf("Insira 3 numeros inteiros:\n"); scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 > numero2 && numero2 > numero3) {
        printf("A ordem esta em decrescente.");
    } else if (numero3 > numero2 && numero2 > numero1) {
        printf("A ordem esta em crescente.");
    } else {
        printf("Não a ordem na sequencia");
    }

    return 0;
}