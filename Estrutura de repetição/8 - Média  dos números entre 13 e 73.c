
#include <stdio.h>

int main()
{
    int i, media;
    int soma = 0;
    int cont = 0;
    
    printf("Média aritmética dos números entre 13 e 73: ");
    for (i = 13; i <= 73; i++) {
        soma += i;
        cont++;
    }
        if (cont > 0) {
            media = soma / cont;
            printf("%d", media);
    
        }

    return 0;
}
