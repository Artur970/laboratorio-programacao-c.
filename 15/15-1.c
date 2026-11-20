#include <stdio.h>

int main(void) {
    float notas[3][2];
    float media;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++) {
            printf("Aluno %d - nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }

    printf("\n| Aluno | Prova 1 | Prova 2 | Media |\n");
    for (int i = 0; i < 3; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;
        printf("| %5d | %7.2f | %7.2f | %5.2f |\n",
               i + 1, notas[i][0], notas[i][1], media);
    }
    return 0;
}
