/*
 * Aluno: Marcos
 * Exercício: 43
 * Descrição: Resolução do exercício 43 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float a, b, x;
    char operador;

    printf("Selecione o primeiro numero: "); scanf("%f", &a);
    printf("Selecione o operador (+,-,*,/): "); scanf(" %c", &operador);
    printf("Selecione o segundo numero: "); scanf("%f", &b);

    switch (operador)
    {
    case '+':
        x = a + b;
        printf("O valor da soma e de = %.2f\n", x);
        break;
    
    case '-':
        x = a - b;
        printf("O valor da subtracao e de = %.2f\n", x);
        break;
    
    case '*':
        x = a * b;
        printf("O valor da multiplicacao e de = %.2f\n", x);
        break;

    case '/':
        if (b == 0) {
            printf("Nao ha divisao por zero\n");
            break;
        } else {
            x = a / b;
            printf("O valor da divisao e de = %.2f\n", x);
            break;
        }
    
    default:
        printf("Nenhuma operacao valida.\n");
        break;
    }

    return 0;
}
