
#include <stdio.h>

int main()
{
    int n1, n2, n3, cod;
 
    printf("Digite o codigo do aluno: ");
    scanf("%d", &cod);
    
    while (1) {
           
    printf("Digite as três notas do aluno (ou 0 para sair): ");
    scanf("%d %d %d", &n1, &n2, &n3);
   
        int med = (n1 + n2 + n3) / 3;
        printf("O código do aluno é: %d e a sua média é igual a: %d\n", cod, med);
        printf("Digite o código do próximo aluno (ou digite 0 para sair): ");
        scanf("%d", &cod);
    }

    return 0;
}
