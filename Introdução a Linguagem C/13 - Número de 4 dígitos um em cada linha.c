/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &num);

    // Obtém os dígitos individualmente
    int dig1 = (num / 1000) % 10;
    int dig2 = (num / 100) % 10;
    int dig3 = (num / 10) % 10;
    int dig4 = num % 10;

    // Imprime cada dígito em uma linha separada
    printf("%d\n", dig1);
    printf("%d\n", dig2);
    printf("%d\n", dig3);
    printf("%d\n", dig4);

    return 0;
}