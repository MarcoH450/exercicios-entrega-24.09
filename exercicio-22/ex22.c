/*
 * Aluno: Marcos
 * Exercício: 22
 * Descrição: Resolução do exercício 22 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

/*
 * O codigo apresentado no enunciado esta sintaticamente correto: os
 * parenteses, as chaves e o ponto e virgula estao nos lugares adequados.
 * O erro existente e semantico, pois uma divisao inteira por zero nao tem
 * resultado definido. A verificacao abaixo impede que a divisao aconteca.
 */

#include <stdio.h>

int main(void) {
    int dividendo = 10;
    int divisor = 0;

    if (divisor == 0) {
        printf("Erro: nao e possivel dividir por zero.\n");
    } else {
        printf("O resultado e %d\n", dividendo / divisor);
    }

    return 0;
}
