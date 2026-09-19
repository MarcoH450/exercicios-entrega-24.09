#include <stdio.h>

int main () {

    int inteiro;
    float decimal;
    double decimalPreciso;
    char caractere;
    char string[50];

    printf("Digite um numero inteiro: "); scanf("%d", &inteiro);
    printf("Digite um numero decimal: "); scanf("%f", &decimal);
    printf("Digite um numero decimal preciso: "); scanf("%lf", &decimalPreciso);
    printf("Digite um caractere: "); scanf(" %c", &caractere);
    printf("Digite uma string: "); scanf(" %s", &string);
    printf("\nRESULTADOS\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %f\n", decimal);
    printf("Decimal preciso: %lf\n", decimalPreciso);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);

    return 0;
}