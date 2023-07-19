/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, res;
    printf("Digite três números inteiros:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    res = num1 + num2 + num3;
    printf("A soma dos três números digitados é: %d", res);
    return 0;
}
