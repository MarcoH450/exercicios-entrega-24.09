/*
 * Aluno: Marcos
 * Exercício: 16
 * Descrição: Resolução do exercício 16 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float nota;
    int frequencia;

    printf("Insira a nota do aluno: "); scanf("%f", &nota);
    printf("Insira a frequencia do aluno (%%): "); scanf("%d", &frequencia);

    if (nota >= 7.0 && frequencia >= 75) {
        printf("Nota: %.2f - Frequencia: %d%%\nAPROVADO\n", nota, frequencia);
    } else {
        printf("Nota: %.2f - Frequencia: %d%%\nREPROVADO\n", nota, frequencia);
    }

    return 0;
}
