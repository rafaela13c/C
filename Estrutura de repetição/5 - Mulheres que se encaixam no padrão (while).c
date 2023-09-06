#include <stdio.h>

int main() {
    int idade, maior = -1, cont = 0;
    char sexo, cab, olho;

    printf("Pesquisa: ");

    while (1) {
        printf("Digite a idade do habitante (-1 para sair): ");
        scanf("%d", &idade);

        if (idade == -1) {
            break;
        }

        printf("Digite o sexo do habitante (F/M): ");
        scanf(" %c", &sexo);
        printf("Digite a cor do cabelo (L para loiro, outra letra para outra cor): ");
        scanf(" %c", &cab);
        printf("Digite a cor do olho (V para verde, outra letra para outra cor): ");
        scanf(" %c", &olho);

        if (idade > maior) {
            maior = idade;
        }
        if (sexo == 'F' && idade >= 18 && idade <= 35 && cab == 'L' && olho == 'V') {
            cont++;
        }
    }

    printf("A maior idade do grupo é %d\n", maior);
    printf("A quantidade de mulheres loiras, de olhos verdes, entre 18 e 35 anos é %d\n", cont);

    return 0;
}
