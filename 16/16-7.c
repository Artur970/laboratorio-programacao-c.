#include <stdio.h>

int main(void) {
    char com_fim[4] = {'O', 'l', 'a', '\0'};
    printf("String com '\\0': %s\n", com_fim);

    printf("\nBytes armazenados:\n");
    for (int i = 0; i < 4; i++)
        printf("com_fim[%d] = %3d\n", i, com_fim[i]);

    int tamanho = 0;
    while (com_fim[tamanho] != '\0')
        tamanho++;
    printf("\nTamanho da string (ate o '\\0'): %d\n", tamanho);

    return 0;
}
