#include <stdio.h>

int main() {
    int i = 0;
    float salario, somasalario = 0, media, mediaf, somafilho = 0, maior = -1, psalario = 0, percent;

    printf("Pesquisa:\n");

    while (1) {
        printf("Digite o salário do habitante (negativo para sair): ");
        scanf("%f", &salario);

        if (salario <= -1) {
            break;
        } 

        printf("Digite a quantidade de filhos do habitante: ");
        int filhos;
        scanf("%d", &filhos);

        if (salario > maior) {
            maior = salario;
        }

        somasalario += salario;
        somafilho += filhos;

        if (salario <= 100) {
            psalario++;
        }

        i++;
    }
    
    media = somasalario / i;
    mediaf = somafilho / i;
    percent = (psalario / i) * 100;

    printf("A média do salário da população é %.2f\n", media);
    printf("A média do número de filhos é %.2f\n", mediaf);
    printf("O maior salário é %.2f\n", maior);
    printf("O percentual de pessoas com salário até R$100,00 é %.2f%%\n", percent);

    return 0;
}
