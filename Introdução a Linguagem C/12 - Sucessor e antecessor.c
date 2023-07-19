/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, triplo, dobro, suc_triplo, ant_dobro, soma;

    printf("Digite um número: ");
    scanf("%d", &num);

    triplo = num * 3;
    dobro = num * 2;

    suc_triplo = triplo + 1;
    ant_dobro = dobro - 1;

    soma = suc_triplo + ant_dobro;

    printf("A soma do sucessor de %d com o antecessor de %d é %d.\n", triplo, dobro, soma);

    return 0;
}