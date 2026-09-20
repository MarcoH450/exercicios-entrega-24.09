/*
 * Aluno: Marcos
 * Exercício: 02
 * Descrição: Le um numero N e exibe os primeiros N termos de uma sequencia em que cada termo e a soma dos dois anteriores.
 * Data: 19/09/2026
 */

#include <stdio.h>

 int main() {

    int sequencia, proximo, anterior = 0, atual = 1;

    printf("Digite um numero inteiro maior do que zero para a sequencia: "); scanf("%d", &sequencia);

    if (sequencia <= 0) {
        printf("Numero da sequencia e invalido");
    } else {
    for (int i = 0; i <= sequencia-1; i++) {
        printf("%d ", atual);
        proximo = anterior + atual;
        anterior = atual; 
        atual = proximo;   
    }
    }

    return 0;
 }
