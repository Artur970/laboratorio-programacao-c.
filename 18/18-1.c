#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

double somar(double a, double b)       { return a + b; }
double subtrair(double a, double b)    { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b)     { return a / b; }

int main(void) {
    int opcao;
    double n1, n2;

    do {
        exibirMenu();
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada invalida. Encerrando.\n");
            break;
        }

        if (opcao == 0) {
            printf("Encerrando a calculadora.\n");
            break;
        }
        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        if (scanf("%lf", &n1) != 1) {
            printf("\nEntrada invalida. Encerrando.\n");
            break;
        }
        printf("Digite o segundo numero: ");
        if (scanf("%lf", &n2) != 1) {
            printf("\nEntrada invalida. Encerrando.\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0)
                    printf("Erro: divisao por zero nao e permitida!\n");
                else
                    printf("Resultado: %.2f\n", dividir(n1, n2));
                break;
        }
    } while (opcao != 0);

    return 0;
}
