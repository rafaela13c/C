#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado() {
    srand(time(NULL)); 
    return (rand() % 6) + 1;  
}

int main() {
    int resultado = Dado();
    printf("O número sorteado é: %d\n", resultado);
    return 0;
}
