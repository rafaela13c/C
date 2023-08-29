
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de a e b: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf("São múltiplos\n");
    } else {
        printf("Não são múltiplos\n");
    }

    return 0;
}