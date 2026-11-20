#include <stdio.h>

int main(void) {
    char a[50], b[50];

    printf("Digite um nome completo (usando scanf): ");
    scanf("%49s", a);                 /* para no primeiro espaco */

    while (getchar() != '\n');        /* limpa o restante da linha */

    printf("Digite o mesmo nome completo (usando fgets): ");
    fgets(b, sizeof(b), stdin);       /* le a linha inteira, com espacos */

    printf("\nscanf: \"%s\"\n", a);
    printf("fgets: \"%s\"", b);       /* fgets guarda o '\n' no final */

    return 0;
}
