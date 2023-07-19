/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, num3, res;
    
    printf("Digite 3 valores inteiros");
scanf("%d", &num1);
scanf("%d", &num2);
scanf("%d", &num3);
res = (num1 * 2) + (num2 * 2) + (num3 * 2);
printf("A soma desses números ao quadrado é %d", res);
    return 0;
}
