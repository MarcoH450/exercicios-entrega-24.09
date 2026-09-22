/*
 * Aluno: Marcos
 * Exercício: 07
 * Descrição: Sistema de controle de sinal (verde, amarelo, vermelho) .
 * Data: 19/09/2026
 */

#include<unistd.h>      /*SISTEMA OPERACIONAL LINUX*/
#include<stdio.h>

int main () {

    while (1) {
        printf("VERDE\n");
        sleep(30);

        printf("AMARELO\n");
        sleep(5);

        printf("VERMELHO\n");
        sleep(25);
    }

    return 0;
}


