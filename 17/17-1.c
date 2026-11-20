#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50], categoria[20], copia[50], descricao[100];

    printf("Digite o nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") != 0 && strcmp(categoria, "PERIFERICO") != 0) {
        printf("\nCategoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("Nome: %s\n", produto);
    printf("Quantidade de caracteres: %zu\n", strlen(produto));
    if (strcmp(categoria, "HARDWARE") == 0)
        printf("Categoria: HARDWARE (componentes internos)\n");
    else
        printf("Categoria: PERIFERICO (dispositivos externos)\n");
    printf("Descricao para o estoque: %s\n", descricao);

    return 0;
}
