#include <stdio.h>

int main () {

    int operacao;
    float numero1, numero2, resultado;

    printf("Selecione um operador matematico:");
    printf("\n1-Soma");
    printf("\n2-Subtracao");
    printf("\n3-Multiplicacao");
    printf("\n4-Divisao\n");
    scanf("%d", &operacao);

    printf("Digite dois numeros para a operação:\n");
    printf("Primeiro numero: "); scanf("%f", &numero1);
    printf("Segundo numero: "); scanf("%f", &numero2);

    switch (operacao)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case 2:
        resultado = numero1 - numero2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case 3:
        resultado = numero1 * numero2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case 4:
        if (numero2 == 0) {
            printf("Nao existe divisao por zero.\n");
        } else {
            resultado = numero1 / numero2;
            printf("Resultado: %.2f\n", resultado);
        }
        break;

    default:
        printf("Nenhuma operacao valida foi selecionada.\n");
        break;
    }

    return 0;
}