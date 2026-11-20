#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    Funcionario f;
    int qtd;
    FILE *arq = fopen("funcionarios.txt", "a");

    printf("Quantos cadastrar agora (0 a 5)? ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd && i < 5; i++) {
        printf("Nome: ");          scanf(" %49[^\n]", f.nome);
        printf("Salario: ");       scanf("%f", &f.salario);
        printf("Horas extras: ");  scanf("%d", &f.horasExtras);
        fprintf(arq, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }
    fclose(arq);

    arq = fopen("funcionarios.txt", "r");
    printf("\n== Cadastrados ==\n");
    while (fscanf(arq, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3)
        printf("%s | R$ %.2f | %d h extras\n", f.nome, f.salario, f.horasExtras);
    fclose(arq);
}
