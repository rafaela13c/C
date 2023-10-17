
#include <stdio.h>

void res(int num1, int num2);


int main()
{
    int num1, num2;
    printf("Digite dois valores: ");
    scanf("%d%d", &num1, &num2);
    res(num1, num2);

    return 0;
}

void res(int num1, int num2) {
    if (num1 > num2) {
        printf("O primeiro número é maior: %d\n", num1);
    } else {
        printf("O segundo número é maior: %d\n", num2);
    }
}
