/*
 * Aluno: Marcos
 * Exercício: 16
 * Descrição: Resolução do exercício 16 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float nota1, nota2;
    int frequencia;
    float media = 0;

    printf("Insira a primeira nota do aluno: "); scanf("%f", &nota1);
    printf("Insira a segunda nota do aluno: "); scanf("%f", &nota2);
    printf("insira a frequencia do aluno (%): "); scanf("%d", &frequencia);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0 && frequencia >= 75) {
        printf("A media do aluno e de: %.2f - Frequencia de %d\%\nAPROVADO\n", media, frequencia);
    } else {
        printf("A media do aluno e de: %.2f - Frequencia de %d\%\nREPROVADO\n", media, frequencia);
    }

    return 0;
}