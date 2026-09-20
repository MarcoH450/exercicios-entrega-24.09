/*
 * Aluno: Marcos
 * Exercício: 33
 * Descrição: Resolução do exercício 33 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float nota1, nota2, nota3, nota4, media;

    printf("Primeira nota: "); scanf("%f", &nota1);
    printf("Segunda nota: "); scanf("%f", &nota2);
    printf("Terceira nota: "); scanf("%f", &nota3);
    printf("Quarta nota: "); scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Media total de notas: %.2f\n", media);

    return 0;
}