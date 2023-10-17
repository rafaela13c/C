
#include <stdio.h>

void res(int num1, int num2, int num3);


int main()
{
    int num1, num2, num3;
    printf("Digite três valores: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    res(num1, num2, num3);

    return 0;
}

void res(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        printf("O primeiro número é maior: %d\n", num1);
    } else if (num2 > num1 && num2 > num3){
        printf("O segundo número é maior: %d\n", num2);
    } else {
        printf("O terceiro número é maior: %d\n", num3);
    }
}
