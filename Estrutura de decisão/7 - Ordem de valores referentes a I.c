
#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    printf("Digite um valor inteiro e positivo i: ");
    scanf("%d", &i);

    printf("Digite os três valores a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (i == 1) {
        if (a <= b && a <= c) {
            printf("%.2f %.2f %.2f\n", a, (b < c ? b : c), (b < c ? c : b));
        } else if (b <= a && b <= c) {
            printf("%.2f %.2f %.2f\n", b, (a < c ? a : c), (a < c ? c : a));
        } else {
            printf("%.2f %.2f %.2f\n", c, (a < b ? a : b), (a < b ? b : a));
        }
    } else if (i == 2) {
        if (a >= b && a >= c) {
            printf("%.2f %.2f %.2f\n", a, (b > c ? b : c), (b > c ? c : b));
        } else if (b >= a && b >= c) {
            printf("%.2f %.2f %.2f\n", b, (a > c ? a : c), (a > c ? c : a));
        } else {
            printf("%.2f %.2f %.2f\n", c, (a > b ? a : b), (a > b ? b : a));
        }
    } else if (i == 3) {
        if (a >= b && a >= c) {
            printf("%.2f %.2f %.2f\n", (b > c ? b : c), a, (b > c ? c : b));
        } else if (b >= a && b >= c) {
            printf("%.2f %.2f %.2f\n", (a > c ? a : c), b, (a > c ? c : a));
        } else {
            printf("%.2f %.2f %.2f\n", (a > b ? a : b), c, (a > b ? b : a));
        }
    } else {
        printf("Valor de i inválido!\n");
        return 1;
    }

    return 0;
}

