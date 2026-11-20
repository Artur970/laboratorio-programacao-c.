#include <stdio.h>

int main(void) {
    int m[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor de m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }

    printf("\nMatriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("| %3d ", m[i][j]);
        printf("|\n");
    }
    printf("\nSoma de todos os elementos: %d\n", soma);
    return 0;
}
