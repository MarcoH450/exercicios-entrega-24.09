/*
 * Aluno: Marcos
 * Exercício: 36
 * Descrição: Resolução do exercício 36 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    char nome[40];
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Nome do aluno: "); scanf("%s", nome);
    printf("Matricula: "); scanf("%d", &matricula);
    printf("Primeira nota: "); scanf("%f", &nota1);
    printf("Segunda nota: "); scanf("%f", &nota2);
    printf("Terceira nota: "); scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);

    return 0;
}
