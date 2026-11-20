#include <stdio.h>

int main(void) {
    int vetor[5];
    int *ptr = vetor;   /* o nome do vetor ja e o endereco do 1o elemento */

    for (int i = 0; i < 5; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor (via ponteiro):\n");
    for (int i = 0; i < 5; i++)
        printf("Elemento %d: %d\n", i + 1, *(ptr + i));

    return 0;
}
