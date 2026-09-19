#include <stdio.h>

int main () {

    char nome[40];
    int matricula;
    float nota1, nota2, nota3;

    printf("Nome do aluno: "); fgets(nome, sizeof(nome), stdin);
    printf("Primeira nota: "); scanf("%f", &nota1);
    printf("Segunda nota: "); scanf("%f", &nota2);
    printf("Terceira nota: "); scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s", nome);
    printf("Media: %.2f\n", media);

    return 0;
}