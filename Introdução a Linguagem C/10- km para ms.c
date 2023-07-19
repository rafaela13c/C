/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float km, ms;
    printf("Digite a velocidade em quilômetros:");
    scanf("%f", &km);
    ms = km / 3.6;
    printf("A velocidade em metros por segundo é: %f", ms);
    return 0;
}
