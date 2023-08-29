
#include <stdio.h>

int main() {
    int cod, quant;
    float unitario, total;

    printf("Digite o código do produto: ");
    scanf("%d", &cod);

    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    if (cod == 1001) {
        unitario = 5.32;
    } else if (cod == 1324) {
        unitario = 6.45;
    } else if (cod == 6548) {
        unitario = 2.37;
    } else if (cod == 987) {
        unitario = 5.32;
    } else if (cod == 7623) {
        unitario = 6.45;
    } else {
        printf("Código inválido!\n");
        return 1;
    }

    total = unitario * quant;
    printf("Preço total devido: %.2f\n", total);

    return 0;
}
