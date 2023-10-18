#include <stdio.h>

int main()
{
    int vet_A[10], vet_B[10], j = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o valor para a posição %d do vetor 1: ", i);
        scanf("%d", &vet_A[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(vet_A[i] % 2 == 0){
            vet_B[j] = vet_A[i];
            j++;
        }
    }
    
        printf("Vetor 2: ");
        for(int i = 0; i < j; i++){
        printf("%d\n", vet_B[i]);
    }
    
   
    
    return 0;
}
