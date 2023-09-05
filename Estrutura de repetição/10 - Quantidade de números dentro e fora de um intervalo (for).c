
#include <stdio.h>

int main()
{
    int i, num, cont1 = 0, cont2 = 0;
    
    for (i = 1; i <= 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
    
        if (num >= 10 && num <= 20) {
        cont1++;
        
        } else {
        cont2++;
        }
    }
    
printf("%d números estão dentro do intervalo [10,20] \n", cont1);
printf("%d números estão fora do intervalo [10,20] \n", cont2);

    return 0;
}
