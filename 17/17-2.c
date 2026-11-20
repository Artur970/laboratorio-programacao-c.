#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], codigo[10], copia[50], mensagem[100];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") != 0 && strcmp(codigo, "SI") != 0) {
        printf("\nCodigo de curso invalido! Use CC ou SI.\n");
        return 1;
    }

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("Nome: %s (%zu caracteres)\n", copia, strlen(nome));
    if (strcmp(codigo, "CC") == 0)
        printf("Curso: Ciencia da Computacao\n");
    else
        printf("Curso: Sistemas de Informacao\n");
    printf("Mensagem: %s\n", mensagem);

    return 0;
}
