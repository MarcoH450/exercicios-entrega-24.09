/*
 * Aluno: Marcos
 * Exercício: 17
 * Descrição: Resolução do exercício 17 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>
#include <math.h>

int main () {

    #define PERCENTUAL 10
    float salarioBruto, salarioLiquido;

    printf("Insura o salario bruto do funcionario: "); scanf("%f", &salarioBruto);

    salarioLiquido = (salarioBruto) - (salarioBruto * PERCENTUAL / 100);

    printf("O salario líquido do funcionario com base no INSS sera de R$ %.2f", salarioLiquido);

    return 0;
}