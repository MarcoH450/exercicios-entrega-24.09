#include <stdio.h>
#include <string.h>

int main () {

    char usuario[] = "admin";
    char senha[] = "1234";
    char codigo1[20], codigo2[20];

    printf("Usuario: "); scanf("%s", &codigo1);
    printf("Senha: "); scanf("%s", &codigo2);

    while (strcmp(codigo1, usuario) != 0 || strcmp(codigo2, senha) != 0) {
        printf("\nACESSO NEGADO. TENTE NOVAMENTE.\n");
        printf("Usuario: "); scanf("%s", &codigo1);
        printf("Senha: "); scanf("%s", &codigo2);
    }
    
    printf("ACESSO AUTORIZADO. BEM VINDO!\n");
    
    return 0;
}