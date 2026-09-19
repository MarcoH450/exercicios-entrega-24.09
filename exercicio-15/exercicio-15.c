#include <stdio.h>

int main () {

    int numero;

    printf("Digite um numero inteiro: "); scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Esse numero e par\n");
    } else {
        printf("Esse numero e impar\n");
    }

    return 0;
}