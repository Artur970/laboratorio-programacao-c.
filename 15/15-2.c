#include <stdio.h>

int main(void) {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 10}};
    int pares = 0;

    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %3d ", m[i][j]);
            if (m[i][j] % 2 == 0)
                pares++;
        }
        printf("|\n");
    }
    printf("\nQuantidade de valores pares: %d\n", pares);
    return 0;
}
