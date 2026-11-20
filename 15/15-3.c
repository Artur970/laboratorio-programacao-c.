#include <stdio.h>

int main(void) {
    int m[3][3] = {{12, 5, 8}, {3, 27, 9}, {14, 1, 20}};
    int maior = m[0][0];

    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %3d ", m[i][j]);
            if (m[i][j] > maior)
                maior = m[i][j];
        }
        printf("|\n");
    }
    printf("\nMaior valor: %d\n", maior);
    return 0;
}
