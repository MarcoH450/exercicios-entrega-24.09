/*
 * Aluno: Marcos
 * Exercício: 24
 * Descrição: Resolução do exercício 24 da Lista de Exercícios 01.
 * Data: 19/09/2026
 */

//CODIGO PROPOSTO

//#include <stdio.h>
//int main(){
    //int n; scanf("%d",&n);
    //if(n%2==0)
        //printf("par");
    //else printf("impar");
//return 0;
//}

//CODIGO REESCRITO

#include <stdio.h>
int main () {
    int numero;
    printf("Insira um numero inteiro: ");

    //entrada: usuario digita o numero inteiro e o mesmo é armazenado na variavel "numero"
    scanf("%d", &numero);

    //processamento: verifica se o restante da divisão por 2 é igual o valor 0 "zero"
    if (numero % 2 == 0) {

        //saida: se o valor for igual a zero, retorna o resultado como um numero par
        printf("O valor %d é par.\n", numero);
    } else {

        //saida: se o valor for diferente de zero (conter resto na divisão), retorna o resultado como um numero impar
        printf("O valor %d é impar.\n", numero);
    }
    return 0;
}
