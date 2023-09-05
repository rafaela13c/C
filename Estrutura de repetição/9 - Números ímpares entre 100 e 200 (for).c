
#include <stdio.h>

int main()
{
    int i, impares;
    printf("Os números entre 100 e 200 que são ímpares são: ");
    for (i = 100; i <= 200; i++) {
    if (i % 2 == 1) {
    printf("%d\n", i);
    }
    }
    return 0;
}
