#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quant = 0;

    while (1) { 
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero % 2 == 0) { 
            soma += numero; 
            quant++; 
        }
    }

    if (quant > 0) { 
        int med = soma / quant; 
        printf("A média dos números pares digitados é: %d\n", med);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
