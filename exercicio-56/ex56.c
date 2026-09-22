/*
 * Aluno: Marcos
 * Exercício: 56
 * Descrição: Resolução do exercício 56 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <string.h>

int main () {

    char usuario[20];
    char senha[20];

    printf("Usuario: "); scanf("%s", usuario);
    printf("Senha: "); scanf("%s", senha);

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("ACESSO AUTORIZADO. BEM VINDO!\n");
    } else {
        printf("ACESSO NEGADO.\n");
    }

    return 0;
}
