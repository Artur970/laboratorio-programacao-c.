#include <stdio.h>

int main(void) {
    char letra = 'A';
    char texto[] = "Ola";

    printf("char   : '%c' (ocupa %zu byte)\n", letra, sizeof(letra));
    printf("string : \"%s\" (ocupa %zu bytes)\n", texto, sizeof(texto));

    printf("\nCaracteres da string:\n");
    for (int i = 0; texto[i] != '\0'; i++)
        printf("texto[%d] = '%c'\n", i, texto[i]);

    return 0;
}
