
#include <stdio.h>

int main() {
    int idade_em_dias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade_em_dias);

    anos = idade_em_dias / 365;
    idade_em_dias %= 365;

    meses = idade_em_dias / 30;
    idade_em_dias %= 30;

    dias = idade_em_dias;

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}
