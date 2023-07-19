/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c, f;
    printf("Digite uma temperatura em graus Celcius:");
    scanf("%f", &c);
    f = c * (9.0/5.0) + 32.0;
    printf("A conversão da temperatura para graus Fahrenheit é: %f", f);
    return 0;
}
