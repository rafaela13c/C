#include <stdio.h>

int main()
{
    int i, idade;
    float salario, somasalario = 0 , media;
    char sexo;
    int maior = -1;
    int menor = 999;
    int contmb = 0;
    
    printf("Pesquisa na região:\n");
    for (i = 1; i <= 15; i++) {
        printf("Informe os dados da pessoa:\n");
        
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Salário: R$");
        scanf("%f", &salario);
        
        somasalario += salario;
    
    if (idade > maior) {
        maior = idade;
    }
    
     if (idade < menor) {
        menor = idade;
    }
    
    if (sexo == 'F' && salario <= 100.0) {
            contmb++;
    }
    }
    
   media = somasalario / i;
    
    printf("\nResultados:\n");
    printf("Média de salário do grupo: R$%.2f\n", media);
    printf("Maior idade do grupo: %d anos\n", maior);
    printf("Menor idade do grupo: %d anos\n", menor);
    printf("Quantidade de mulheres com salário até R$100,00: %d\n", contmb);

    return 0;
}