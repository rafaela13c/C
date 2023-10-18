#include <stdio.h>

int main()
{
    int vet_A[5], vet_B[5], vet_C[10];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o valor para a posição %d do vetor 1: ", i);
        scanf("%d", &vet_A[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("Digite o valor para a posição %d do vetor 2: ", i);
        scanf("%d", &vet_B[i]);
    }
    
    for(int i = 0; i < 5; i++){
        vet_C[i] = vet_A[i];
        vet_C[i + 5] = vet_B[i];
    }
      
    printf("O vetor C é: ");
    for(int i = 0; i < 10; i++){
        printf("%d\n", vet_C[i]);
    }
    
    return 0;
}
