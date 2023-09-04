
#include <stdio.h>

int main()
{
    int num;
    int quant1 = 0, quant2 = 0, quant3 = 0, quant4 = 0;
    
    do {
    printf("Digite um número (ou um número negativo para sair): ");
    scanf("%d", &num);
    
    if (num >= 0 && num <= 25) {
        quant1++;
        
    } else if (num > 25 && num <= 50) {
        quant2++;
      
    } else if (num > 50 && num <= 75) {
        quant3++;
    
    } else if (num > 75 && num <= 100) {
        quant4++;
    }
        } while (num >= 0);
         printf("%d números digitados estão dentro do intervalo [0, 25]\n", quant1);
         printf("%d números digitados estão dentro do intervalo [26, 50]\n", quant2);
         printf("%d números digitados estão dentro do intervalo [51, 75]\n", quant3);
         printf("%d números digitados estão dentro do intervalo [76, 100]\n", quant4);
        


    return 0;
}
