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