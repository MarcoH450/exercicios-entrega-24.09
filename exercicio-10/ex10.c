/*
 * Aluno: Marcos
 * Exercício: 10
 * Descrição: contagem de troco em centavos.
 * Data: 19/09/2026
 */

#include <stdio.h>

int main () {

    int troco, restante;

    printf("Digite o valor do troco em centavos: "); scanf("%d", &troco);
    restante = troco;

    int moedas25 = restante / 25;
    /*Retira e armazena o meximo de moedas de 25 centavos possiveis do valor*/
    restante = restante % 25;
    printf("Moedas de 25 centavos: %d\n", moedas25);
    int moedas10 = restante / 10;
    restante = restante % 10;
    printf("Moedas de 10 centavos: %d\n", moedas10);
    int moedas5 = restante / 5;
    restante = restante % 5;
    printf("Moedas de 5 centavos: %d\n", moedas5);
    int moedas1 = restante;
    printf("Moedas de 1 centavo: %d\n", moedas1);

    return 0;
}

/*
 * DECOMPOSICAO E ESTRATEGIA GULOSA
 *
 * O problema e dividido por tipo de moeda, da maior para a menor.
 * Em cada etapa, a divisao inteira calcula a quantidade de moedas e o
 * operador de resto (%) determina quanto ainda falta devolver. A estrategia
 * e gulosa porque sempre escolhe primeiro o maior valor possivel: 25, 10,
 * 5 e, por ultimo, 1 centavo.
 */
