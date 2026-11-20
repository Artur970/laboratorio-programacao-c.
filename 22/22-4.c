#include <stdio.h>

void dobrar(int *p) {
    *p = *p * 2;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Valor original: %d\n", numero);

    dobrar(&numero);

    printf("Valor apos dobrar: %d\n", numero);

    return 0;
}
