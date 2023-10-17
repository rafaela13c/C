#include <stdio.h>

void res(int num);

int main() {
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    res(num);

    return 0;
}

void res(int num) {
    if (num >= 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }
}
