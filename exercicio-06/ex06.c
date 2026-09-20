/*
 * Aluno: Marcos
 * Exercício: 06
 * Descrição: Comparacao de metodos de soma usando WHILE e formula matematica.
 * Data: 20/09/2026
 */


#include <stdio.h>

int main (){

int N, contador = 1;
int soma = 0;

printf("Digite a sequencia numerica: "); scanf("%d", &N);

while (contador <= N) {
    soma += contador;
    contador++;
}
printf("Soma WHILE = %d\n", soma);

int somaEquacao = N * (N + 1) / 2;
printf("Soma equacao = %d\n", somaEquacao);

return 0;
}

/*  RESOLUCAO   
A fórmula matemática é mais eficiente porque calcula a soma diretamente
com poucas operações fixas. O laço while executa várias repetições e seu
custo aumenta conforme o valor de N.
*/