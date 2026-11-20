#include <stdio.h>

float maiorPreco(float a, float b) {
    return (a > b) ? a : b;
}

int main(void) {
    float p1, p2;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &p1);
    printf("Digite o preco do segundo produto: ");
    scanf("%f", &p2);

    if (p1 == p2)
        printf("\nOs precos sao iguais: R$ %.2f\n", p1);
    else
        printf("\nO maior preco e: R$ %.2f\n", maiorPreco(p1, p2));

    return 0;
}
