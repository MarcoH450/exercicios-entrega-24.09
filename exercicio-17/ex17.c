/*
 * Aluno: Marcos
 * Exercício: 17
 * Descrição: Resolução do exercício 17 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    float salarioBruto, salarioLiquido;

    printf("Insira o salario bruto do funcionario: "); scanf("%f", &salarioBruto);

    salarioLiquido = salarioBruto - (salarioBruto * 0.10);

    printf("O salario liquido do funcionario sera de R$ %.2f\n", salarioLiquido);

    return 0;
}
