
#include <stdio.h>

int main()
{
    int vet1[5], vet2[5];
    
    for(int i = 0; i < 5; i++){
    printf("Digite o valor para a posição %d do vetor 1: ", i);
    scanf("%d", &vet1[i]);
    }
    
     for(int i = 0; i < 5; i++){
    printf("Digite o valor para a posição %d do vetor 2: ", i);
    scanf("%d", &vet2[i]);
    }
    
    printf("Os valores intercalados são: ");
    for(int i = 0; i < 5; i++){
    printf("%d %d ", vet1[i], vet2[i]);    
    }

    return 0;
}
