
#include <stdio.h>

int main()
{
    int n1, n2, n3, med;
    
     printf("Digite três números: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    while ((n1 > 0) && (n2 > 0) && (n3 > 0)) {
        if ((n1 % 2 == 0) && (n2 % 2 == 0) && (n3 % 2 == 0)) { 
            med = (n1 + n2 + n3) / 3;
            printf("A média dos três valores é igual a: %d\n", med);
        } else {
            printf("Os números não são pares.\n"); 
        }
    
     printf("Digite três números (ou digite 0 para sair): ");
        scanf("%d", &n1);
        scanf("%d", &n2);
        scanf("%d", &n3);
    }

return 0;
}
