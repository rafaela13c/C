
#include <stdio.h>

int main() {
    int cod, quant;
    float preco;

    printf("Digite o código do item: ");
    scanf("%d", &cod);

    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    if (cod == 100) {
        preco = 1.20;
    } else if (cod == 101) {
        preco = 1.30;
    } else if (cod == 102) {
        preco = 1.50;
    } else if (cod == 103) {
        preco = 1.20;
    } else if (cod == 104) {
        preco = 1.30;
    } else if (cod == 105) {
        preco = 1.00;
    } else {
        printf("Código inválido!\n");
        return 1;
    }

    float total = preco * quant;
    printf("Total a ser pago: %.2f\n", total);

    return 0;
}