/*
 * Aluno: Marcos
 * Exercício: 08
 * Descrição: Resolução do exercício 08 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main () {

    srand(time(NULL));
    int sorteio, palpite;
    int tentativas = 1;

    sorteio = rand() % 100 +1;

    printf("De seu palpite de um numero de 0 a 100: "); scanf("%d", &palpite);

    while (palpite != sorteio) {
        
        if (palpite == sorteio) {
            printf("Parabens, voce acertou!");
            break;
        } else {
            if (palpite > sorteio) {
                printf("\nO numero e menor.");
            } else {
                printf("\nO numero e maio.");
            }
        tentativas++;
        printf("\nTente novamente: "); scanf("%d", &palpite);
        }
    }
    printf("\nVOCE ACERTOU!\n");
    printf("Numero de tentativas: %d\n", tentativas);
    return 0;
}