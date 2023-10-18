
#include <stdio.h>
#include <math.h>

int main()
{
    int vetor[5], soma = 0, maior = -9999, menor = 9999;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 5; i++){
        soma += vetor[i];    
    }
    printf("Soma de todos os valores: %d\n", soma);
    
    printf("Números pares: ");
    for (int i = 0; i < 5; i++){
        if (vetor[i] % 2 == 0){ 
            printf("%d", vetor[i]);
        }
    }
    
    for (int i = 0; i < 5; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
     printf("Dobro de todos os valores: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor[i] * 2);
    }
    
    printf("\nRaiz quadrada dos valores impares: ");
    for (int i = 0; i < 5; i++){
        if (vetor[i] % 2 != 0){ 
            printf("%.2f", sqrt(vetor[i]));
        }
    }
    
    return 0; 
}