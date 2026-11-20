#include <stdio.h>

int main(void) {
    char nome[50];
    int mat, qtd;
    FILE *arq = fopen("funcionarios.txt", "w");

    printf("Quantos funcionarios (1 a 5)? ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd && i < 5; i++) {
        printf("Nome: ");      scanf(" %49[^\n]", nome);
        printf("Matricula: "); scanf("%d", &mat);
        fprintf(arq, "%s;%d\n", nome, mat);
    }
    fclose(arq);
    printf("Dados gravados com sucesso!\n");
}
