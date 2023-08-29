
#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;

    printf("Digite a idade em anos, meses e dias:\n");
    scanf("%d %d %d", &anos, &meses, &dias);

    idade_em_dias = anos * 365 + meses * 30 + dias;

    printf("Idade em dias: %d\n", idade_em_dias);

    return 0;
}
