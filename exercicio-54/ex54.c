/*
 * Aluno: Marcos
 * Exercício: 54
 * Descrição: Resolução do exercício 54 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <string.h>

int main () {

    char primeiraString[50];
    char segundaString[50];

    printf("Digite a primeira string: "); scanf("%s", primeiraString);
    printf("Digite a segunda string: "); scanf("%s", segundaString);

    if (strcmp(primeiraString, segundaString) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
