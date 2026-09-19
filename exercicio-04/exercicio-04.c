#include <stdio.h>

int main () {

    int fila;

    printf("Quantas pessoas estão na fila?\n"); scanf("%d", &fila);

    for (int i = 1; i <= fila; i++) {

        printf("Senha %d\n", i);

    }


    return 0;
}