#include <stdio.h>
#define PI 3.14159

int main () {

    double raio, area;

    printf("Insira o raio do circulo: "); scanf("%lf", &raio);
    
    area = PI * (raio * raio);

    printf("Area do circulo = %.2lf\n", area);

    return 0;
}